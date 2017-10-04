const lucy = require("../lib/index.js");
const path = require("path");
const LUCY_INDEX = path.resolve("./test/res/lucy_index");

describe("lucy", () => {
  it("exists", () => {
    expect(lucy).toBeDefined();
  });

  it("has a IndexSearcher method", () => {
    expect(lucy.IndexSearcher).toBeDefined();
  });

  it("can create an IndexSearcher", () => {
    const index_searcher = new lucy.IndexSearcher(LUCY_INDEX);
    expect(index_searcher).toBeDefined();
  });

  it("has a Schema method", () => {
    expect(lucy.Schema).toBeDefined();
  });

  it("can create a Schema", () => {
    const schema = new lucy.Schema();
    expect(schema).toBeDefined();
  });

  it("has a EasyAnalyzer method", () => {
    expect(lucy.EasyAnalyzer).toBeDefined();
  });

  it("can create a EasyAnalyzer with new", () => {
    const easy_analyzer = new lucy.EasyAnalyzer("en");
    expect(easy_analyzer).toBeDefined();
  });

  it("can create a EasyAnalyzer without new", () => {
    const easy_analyzer = lucy.EasyAnalyzer("en");
    expect(easy_analyzer).toBeDefined();
  });
});
