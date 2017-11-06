/**
 * See https://lucy.apache.org/docs/perl/Lucy/Search/Searcher.html
 * @class
 */
class Searcher {
    constructor() {

    }

    /**
     * Accessor for the object’s schema member.
     * @returns {Schema}
     */
    get_schema() {
        return null;
    }

    /**
     * @param {String|Query} query Either a Query object or a query string
     * @param {Number} [offset=0] The number of most-relevant hits to discard, typically used when “paging” through hits N at a time. Setting offset to 20 and num_wanted to 10 retrieves hits 21-30, assuming that 30 hits can be found.
     * @param {Number} [num_wanted=10] The number of hits you would like to see after offset is taken into account.
     * @param {SortSpec} [sort_spec] which will affect how results are ranked and returned..
     * @returns {Hits} 
     */
    hits(query, offset, num_wanted, sort_spec) {
        return null;
    }
}
/**
 * Hits objects are iterators used to access the results of a search.
 * See https://lucy.apache.org/docs/perl/Lucy/Search/Hits.html
 * @class
 * @global
 */
class Hits {
    constructor() {

    }
    /**
     * Return the next hit, or undef when the iterator is exhausted.
     * @return {Hits}
     */
    next() {
        return null;
    }
}
/**
 * See https://lucy.apache.org/docs/perl/Lucy/Search/SortSpec.html
 * @class
 */
class SortSpec {

}
/**
 * See https://lucy.apache.org/docs/perl/Lucy/Search/Query.html
 * @class 
 */
class Query {

}

/**
 * Use the IndexSearcher class to perform search queries against an index. IndexSearchers operate against a single point-in-time view or Snapshot of the index. If an index is modified, a new IndexSearcher must be opened to access the changes. See https://lucy.apache.org/docs/perl/Lucy/Search/IndexSearcher.html
 * 
 * @class
 * @extends Searcher
 * 
 * @example
 * const index_searcher = new lucy.IndexSearcher("path/to/lucy_index");
 */
class IndexSearcher extends Searcher {
    /**
     * @param {String} lang is the two letter language id to analyze
     */
    constructor(lang) {
        super();
    }


}


/**
 * A Schema is a specification which indicates how other entities should interpret the raw data in an inverted index and interact with it. Once an actual index has been created using a particular Schema, existing field definitions may not be changed. However, it is possible to add new fields during subsequent indexing sessions. See https://lucy.apache.org/docs/perl/Lucy/Plan/Schema.html
 * 
 * @class
 * 
 * @example 
 * const schema = new lucy.Schema();
 * 
 */
class Schema {
    constructor(lang) {

    }

    specField(arg0, arg1) {
        return null;
    }
}

/**
 * EasyAnalyzer is an analyzer chain consisting of a StandardTokenizer, a Normalizer, and a SnowballStemmer.
 * 
 * @class
 * 
 * @example 
 * const easy_analyzer = new lucy.EasyAnalyzer("en"); // new
 * 
 * @example
 * const easy_analyzer = lucy.EasyAnalyzer("en"); // No new
 * 
 */
class EasyAnalyzer {
    /**
     * @param {String} lang is the two letter language id to analyze
     */
    constructor(lang) {

    }
}

/**
 * See https://lucy.apache.org/docs/perl/Lucy/Plan/FieldType.html
 * @class
 */
class FieldType {

}

/**
 * FullTextType is an implementation of FieldType tuned for “full text search”.
 * Full text fields are associated with an Analyzer, which is used to tokenize and normalize the text so that it can be searched for individual words.
 * For an exact-match, single value field type using character data. See https://lucy.apache.org/docs/perl/Lucy/Plan/FullTextType.html
 * 
 * 
 * 
 * @class
 * @extends FieldType
 * 
 */
class FullTextType extends FieldType {
    /**
     * @param {EasyAnalyzer} easy_analyzer is the EasyAnalyzer that tokenizes and normalizes the text
     */
    constructor(easy_analyzer) {
        super();
    }
}



/**
 * Main namespace object for LucyJs library
 * @typedef {Object} Lucy
 * @property {typeof FullTextType} FullTextType
 * @property {typeof Schema} Schema
 * @property {typeof IndexSearcher} IndexSearcher
 * @property {typeof EasyAnalyzer} EasyAnalyzer
 * @jsdoc-prevent-comment-parse-plugin
 */

/**
 * @type {Lucy}
 * @jsdoc-prevent-comment-parse-plugin
 */
module.exports = require("bindings")("lucy");