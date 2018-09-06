
        
        
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
        # Extract options for this collection from the site configuration.
    #
    # Returns the metadata for this collection
    def extract_metadata
      if site.config['collections'].is_a?(Hash)
        site.config['collections'][label] || {}
      else
        {}
      end
    end
    
    module Jekyll
  module Commands
    class Build < Command
      class << self
        # Create the Mercenary command for the Jekyll CLI for this Command
        def init_with_program(prog)
          prog.command(:build) do |c|
            c.syntax      'build [options]'
            c.description 'Build your site'
            c.alias :b
    
            def case_insensitive_urls(things, destination)
          things.each_with_object({}) do |thing, memo|
            dest = thing.destination(destination)
            (memo[dest.downcase] ||= []) << dest
          end
        end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
          describe '#import' do
        it 'makes a new scenario for Bob' do
          expect {
            scenario_import.import(:skip_agents => true)
          }.to change { users(:bob).scenarios.count }.by(1)
    
      describe '#interpolate_jsonpaths' do
    let(:payload) { { :there => { :world => 'WORLD' }, :works => 'should work' } }
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
          it 'calls the .trigger_web_request with headers, and they get passed to .receive_web_request' do
        request = ActionDispatch::Request.new({
          'action_dispatch.request.request_parameters' => { :some_param => 'some_value' },
          'REQUEST_METHOD' => 'POST',
          'HTTP_ACCEPT' => 'text/html',
          'HTTP_X_CUSTOM_HEADER' => 'foo'
        })
    
        attr_reader :filters
    
        def as_json
      @pages
    end
    
        def build_and_queue_request(url, options, &block)
      request = Request.new(url, request_options.merge(options))
      request.on_complete(&block) if block
      queue(request)
      request
    end
    
        self.initial_paths = []
    self.options = {}
    self.stubs = {}
    
        def process_response?(response)
      response.body.present?
    end
    
        # Make rules use nesting so that
    #
    #     foo
    #       color: green
    #     foo bar
    #       color: red
    #     foo baz
    #       color: blue
    #
    # becomes
    #
    #     foo
    #       color: green
    #       bar
    #         color: red
    #       baz
    #         color: blue
    #
    # @param root [Tree::Node] The parent node
    def nest_seqs(root)
      current_rule = nil
      root.children.map! do |child|
        unless child.is_a?(Tree::RuleNode)
          nest_seqs(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
    
          Sass::Plugin.watch(files)
    end
    # @comment
    #   rubocop:enable MethodLength