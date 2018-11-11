
        
                format('%2$e', 0, 109.52).should == '1.095200e+02'
        format('%2$E', 0, 109.52).should == '1.095200E+02'
        format('%2$f', 0, 10.952).should == '10.952000'
        format('%2$g', 0, 12.1234).should == '12.1234'
        format('%2$G', 0, 12.1234).should == '12.1234'
        format('%2$a', 0, 196).should == '0x1.88p+7'
        format('%2$A', 0, 196).should == '0X1.88P+7'
    
    describe 'Kernel.system' do
  it_behaves_like :kernel_system, :system, Kernel
end

    
    describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
        $Kernel_trace_var_global = 'foo'
    
      ruby_version_is '2.5' do
    describe ':uplevel keyword argument' do
      before :each do
        $VERBOSE = true
      end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
          # Find a Sass file, if it exists.
      #
      # This is the primary entry point of the Importer.
      # It corresponds directly to an `@import` statement in Sass.
      # It should do three basic things:
      #
      # * Determine if the URI is in this importer's format.
      #   If not, return nil.
      # * Determine if the file indicated by the URI actually exists and is readable.
      #   If not, return nil.
      # * Read the file and place the contents in a {Sass::Engine}.
      #   Return that engine.
      #
      # If this importer's format allows for file extensions,
      # it should treat them the same way as the default {Filesystem} importer.
      # If the URI explicitly has a `.sass` or `.scss` filename,
      # the importer should look for that exact file
      # and import it as the syntax indicated.
      # If it doesn't exist, the importer should return nil.
      #
      # If the URI doesn't have either of these extensions,
      # the importer should look for files with the extensions.
      # If no such files exist, it should return nil.
      #
      # The {Sass::Engine} to be returned should be passed `options`,
      # with a few modifications. `:syntax` should be set appropriately,
      # `:filename` should be set to `uri`,
      # and `:importer` should be set to this importer.
      #
      # @param uri [String] The URI to import.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` that's currently being resolved.
      #   This is safe for subclasses to modify destructively.
      #   Callers should only pass in a value they don't mind being destructively modified.
      # @return [Sass::Engine, nil] An Engine containing the imported file,
      #   or nil if it couldn't be found or was in the wrong format.
      def find(uri, options)
        Sass::Util.abstract(self)
      end
    
        desc 'Release all gems as packages'
    task :all => [:test, :commit_version] + GEMS_AND_ROOT_DIRECTORIES.keys
  end
end

    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
    namespace :qa do
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
          expect(new_source)
        .to eq(construct(false, a, make_multi(safe_heredoc), false))
    end
  end
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Checks whether the `hash` node contains any `pair`- or `kwsplat` nodes.
      #
      # @return[Boolean] whether the `hash` is empty
      def empty?
        children.empty?
      end