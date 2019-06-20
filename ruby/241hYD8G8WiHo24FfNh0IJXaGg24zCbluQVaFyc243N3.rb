
        
                def preload_pipeline_warnings
          # This preloads the number of warnings for every pipeline, ensuring
          # that Ci::Pipeline#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.number_of_warnings
        end
    
            def collection_options
          { state: 'all', sort: 'created', direction: 'asc' }
        end
      end
    end
  end
end

    
            def importer_class
          NoteImporter
        end
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
    module Gitlab
  module QueryLimiting
    # Middleware for reporting (or raising) when a request performs more than a
    # certain amount of database queries.
    class Middleware
      CONTROLLER_KEY = 'action_controller.instance'.freeze
      ENDPOINT_KEY = 'api.endpoint'.freeze
    
                  # Break so we don't find the next non flag and shift our
              # main args.
              break
            end
          end
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
              # First determine the proper array of VMs.
          machines = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                @logger.debug('Finding machines that match regex: #{pattern}')
    
        # Like #{merge} but merges into self.
    def merge!(other)
      @items.merge!(other.__internal_state[:items])
      self
    end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
    Rake::TestTask.new(:'test:core') do |t|
  core_tests = %w[base delegator encoding extensions filter
     helpers mapped_error middleware radius rdoc
     readme request response result route_added_hook
     routing server settings sinatra static templates]
  t.test_files = core_tests.map {|n| 'test/#{n}_test.rb'}
  t.ruby_opts = ['-r rubygems'] if defined? Gem
  t.ruby_opts << '-I.'
  t.warning = true
end
    
    desc 'run specs'
task(:spec) { ruby '-S rspec spec' }
    
          def react_and_close(env, body)
        reaction = react(env)
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        def options_config=(options_config)
      loaded_config = ConfigLoader.load_file(options_config)
      @options_config = ConfigLoader.merge_with_default(loaded_config,
                                                        options_config)
    end
    
            def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
        end
    
    #############################################################################
#
# Packaging tasks
#
#############################################################################
    
        def messages
      return @messages
    end # def messages
    
        @name = nil
    @architecture = 'native'
    @description = 'no description given'
    @version = nil
    @epoch = nil
    @iteration = nil
    @url = nil
    @category = 'default'
    @license = 'unknown'
    @vendor = 'none'
    
        if info.include?('repository')
      self.url = info['repository']['url']
    else
      self.url = 'https://npmjs.org/package/#{self.name}'
    end
    
      def to_s(format=nil)
    # Default format if nil
    # git_1.7.9.3-1-amd64.pkg.tar.xz
    return super(format.nil? ? 'NAME-FULLVERSION-ARCH.EXTENSION' : format)
  end # def to_s
    
        args = %W(-t #{@target} -s #{@source} -C #{@directory})
    args << parsed_options
    args << @args
    
    # Like the ::Gem::Package::TarWriter but contains some backports and bug fixes
class FPM::Util::TarWriter < ::Gem::Package::TarWriter
  if FPM::Issues::TarWriter.has_issues_with_split_name?
    def split_name(name)
      if name.bytesize > 256 then
        raise ::Gem::Package::TooLongFileName.new('File \'#{name}\' has a too long path (should be 256 or less)')
      end