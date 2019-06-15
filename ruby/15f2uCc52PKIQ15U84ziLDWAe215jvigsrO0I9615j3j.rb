
        
              if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
        @omniauth.before_request_phase do |env|
      # If the user is trying to reconnect to an existing account, store in session
      request = ActionDispatch::Request.new(env)
      request.session[:auth_reconnect] = !!request.params['reconnect']
    end
  end
    
          script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include(*%w[
        https://s3-cdn.com/assets/
        https://s3-cdn.com/brotli_asset/
        https://cdn.com/highlight-js/
        https://cdn.com/javascripts/
        https://cdn.com/plugins/
        https://cdn.com/theme-javascripts/
        http://test.localhost/extra-locales/
      ])
    end
  end
    
          if api_key.allowed_ips.present? && !api_key.allowed_ips.any? { |ip| ip.include?(request.ip) }
        Rails.logger.warn('[Unauthorized API Access] username: #{api_username}, IP address: #{request.ip}')
        return nil
      end
    
      def self.distance(loc1, loc2)
    lat1_rad, lon1_rad = loc1[0] * RAD_PER_DEG, loc1[1] * RAD_PER_DEG
    lat2_rad, lon2_rad = loc2[0] * RAD_PER_DEG, loc2[1] * RAD_PER_DEG
    
        def execute(command: nil, target_object: nil)
      action_name = command.method_name
      action_class_ref = class_ref_for_action(named: action_name)
      parameter_map = {}
      closure_argument_value = nil
    
          it 'adds docset_feed_url param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_feed_url: 'http://docset-feed-url.com'
          )
        end').runner.execute(:test)
    
          it 'builds with multiple dependencies' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'build',
              dependencies: ['TestDependency1', 'TestDependency2']
            )
          end').runner.execute(:test)
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
        attr_accessor :name, :type, :path
    
        def initialize_stubs
      self.class.stubs.each do |path, block|
        Typhoeus.stub(url_for(path)).and_return do
          Typhoeus::Response.new \
            effective_url: url_for(path),
            code: 200,
            headers: { 'Content-Type' => 'text/html' },
            body: self.instance_exec(&block)
        end
      end
    end
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
            # This contains all the provider plugins by name, and returns
        # the provider class and options.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :providers
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
    # Now, add our init-scripts, systemd services, and so on:
pleaserun = package.convert(FPM::Package::PleaseRun)
pleaserun.input ['/usr/bin/my-executable', '--foo-from', 'bar']
    
              extension_header[TAR_TYPEFLAG_OFFSET] = 'x'
          extension_header[TAR_LENGTH_OFFSET_START..TAR_LENGTH_OFFSET_END] = extension_data.length.to_s(8).rjust(12, '0')
          extension_header = checksum_header(extension_header)
    
      # Extract name and version from PackageInfo XML
  def extract_info(package)
    build_path('expand').tap do |path|
      doc = REXML::Document.new File.open(File.join(path, 'PackageInfo'))
      pkginfo_elem = doc.elements['pkg-info']
      identifier = pkginfo_elem.attribute('identifier').value
      self.version = pkginfo_elem.attribute('version').value
      # set name to the last dot element of the identifier
      self.name = identifier.split('.').last
      logger.info('inferring name #{self.name} from pkg-id #{identifier}')
    end
  end # def extract_info
    
        # Licenses could include more than one.
    # Speaking of just taking the first entry of the field:
    # A crude thing to do, but I suppose it's better than nothing.
    # -- Daniel Haskin, 3/24/2015
    self.license = control['license'][0] || self.license
    
      option '--php-bin', 'PHP_BIN',
    'Specify php executable path if differs from the os used for packaging'
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'
    
    # Use a zip as a package.
#
# This provides no metadata. Both input and output are supported.
class FPM::Package::Zip < FPM::Package
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM