
        
              # it 'raises an exception after retrying a failed request multiple times' do
      #   stub_request(:get, 'https://appstoreconnect.apple.com/testflight/v2/providers/1234/apps/898536088/platforms/ios/trains').
      #     to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains_operation_failed.json'), headers: { 'Content-Type' => 'application/json' })
    
          stub_request(:get, 'https://appstoreconnect.apple.com/itc/static-resources/controllers/login_cntrl.js').
        to_return(status: 200, body: itc_read_fixture_file('login_cntrl.js'))
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa').
        to_return(status: 200, body: '')
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/wa').
        to_return(status: 200, body: '')
      stub_request(:get, 'https://olympus.itunes.apple.com/v1/session').
        to_return(status: 200, body: itc_read_fixture_file('olympus_session.json'))
      stub_request(:get, 'https://olympus.itunes.apple.com/v1/app/config?hostname=itunesconnect.apple.com').
        to_return(status: 200, body: { authServiceKey: 'e0abc' }.to_json, headers: { 'Content-Type' => 'application/json' })
    
        def self.prevalidate
      output_types = Scan.config[:output_types]
      has_multiple_report_types = output_types && output_types.split(',').size > 1
      if has_multiple_report_types && Scan.config[:custom_report_file_name]
        UI.user_error!('Using a :custom_report_file_name with multiple :output_types (#{output_types}) will lead to unexpected results. Use :output_files instead.')
      end
    end
    
    full_params = ARGV.shelljoin
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
          spec['version'] = Bootstrap::VERSION
    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
        def parse_warn_directive(parent, line, root, value, offset)
      raise SyntaxError.new('Invalid warn directive '@warn': expected expression.') unless value
      raise SyntaxError.new('Illegal nesting: Nothing may be nested beneath warn directives.',
        :line => @line + 1) unless line.children.empty?
      offset = line.offset + line.text.index(value).to_i
      Tree::WarnNode.new(parse_script(value, :offset => offset))
    end
    
              def _#{name}(name)
            (@#{name}s && @#{name}s[name]) || @parent && @parent._#{name}(name)
          end
          protected :_#{name}
    
        # The name of the mixin in which the error occurred.
    # This could be `nil` if the error occurred outside a mixin.
    #
    # @return [String]
    def sass_mixin
      sass_backtrace.first[:mixin]
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end