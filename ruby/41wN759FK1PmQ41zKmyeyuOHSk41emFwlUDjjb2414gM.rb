
        
                it 'creates a reblog by sender of status' do
          reblog = sender.statuses.first
    
      # Tell browsers whether to use the native HTML5 validations (novalidate form option).
  # These validations are enabled in SimpleForm's internal config but disabled by default
  # in this configuration, which is recommended due to some quirks from different browsers.
  # To stop SimpleForm from generating the novalidate option, enabling the HTML5 validations,
  # change this configuration to true.
  config.browser_validations = false
    
        it 'makes followers unfollow old account' do
      expect(follower.following?(old_account)).to be false
    end
    
        # .y file from ruby-php-serialization gem
    
        RDoc::Require.new '\'foo\'', ''
    assert_equal 'foo', @req.name
    
          assert_equal(nil, Readline::HISTORY.shift)
    rescue NotImplementedError
    end
  end
    
      def test_append_after
    assert_equal(Reline::KillRing::State::FRESH, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('a')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('b')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    assert_equal('ab', @kill_ring.yank)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal('ab', @kill_ring.yank)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['ab', 'ab'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['ab', 'ab'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
  end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
          # Checks the client's masked token to see if it matches the
      # session token.
      def valid_token?(session, token)
        return false if token.nil? || token.empty?
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
      it 'accepts post form requests with masked authenticity_token field' do
    post('/', {'authenticity_token' => masked_token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
        desc 'Run one single machine acceptance test'
    task :single, :machine do |t, args|
      ENV['LS_VAGRANT_HOST']  = args[:machine]
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/**/*_spec.rb']]))
    end
  end
end

    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
          Spree.check_unused_translations
      if false && Spree.unused_translation_messages.any?
        puts '\nThere are unused translations within Spree:'
        puts Spree.unused_translation_messages.sort
        exit(1)
      end
    end
  end
end

    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
    # Example for adding special attributes
package.attributes[:deb_group] = 'super-useful'
package.attributes[:rpm_group] = 'super-useful'
    
          @command.dependencies.tap do |dependencies|
        # Verify dependencies don't include commas (#257)
        dependencies.each do |dep|
          next unless dep.include?(',')
          splitdeps = dep.split(/\s*,\s*/)
          @messages << 'Dependencies should not ' \
            'include commas. If you want to specify multiple dependencies, use ' \
            'the '-d' flag multiple times. Example: ' + \
            splitdeps.map { |d| '-d '#{d}'' }.join(' ')
        end
      end
    
      # This method is invoked on a package when it has been converted to a new
  # package format. The purpose of this method is to do any extra conversion
  # steps, like translating dependency conditions, etc.
  def converted_from(origin)
    # nothing to do by default. Subclasses may implement this.
    # See the RPM package class for an example.
  end # def converted
    
        # Follow similar rules to these used in ``to_s_fullversion`` method.
    # FIXME: maybe epoch should also be introduced somehow ('#{version},#{epoch})?
    #        should it go to pkgdata['version'] or to another place?
    # https://www.freebsd.org/doc/en/books/porters-handbook/makefile-naming.html
    pkg_version = (iteration and (iteration.to_i > 0)) ?  '#{version}-#{iteration}' : '#{version}'
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
    # TODO(sissel): Add dependency checking support.
# IIRC this has to be done as a 'checkinstall' step.
class FPM::Package::Solaris < FPM::Package
    
                  unless self.class.namespace_inheritable(:do_not_route_options) || allowed_methods.include?(Grape::Http::Headers::OPTIONS)
                config[:endpoint].options[:options_route_enabled] = true
              end
    
          # (see #global_setting)
      def namespace_inheritable(key, value = nil)
        get_or_set :namespace_inheritable, key, value
      end
    
          expect(@session.current_window).to eq(orig_window)
      # Maximizing the browser affects all tabs so this may not be valid in real browsers
      # expect(@session.current_window.size).to eq(@initial_size)
    
          def included(base)
        warn 'including Capybara::DSL in the global scope is not recommended!' if base == Object
        if defined?(::RSpec::Matchers) && base.include?(::RSpec::Matchers)
          base.send(:include, ::Capybara::RSpecMatcherProxies)
        end
        super
      end
    end
  end
    
      it 'should raise ElementNotFound when nothing was found' do
    expect do
      @session.first('//div[@id='nosuchthing']')
    end.to raise_error Capybara::ElementNotFound
  end
    
      describe_node_filters do |disabled: nil, **|
    ' that is disabled' if disabled == true
  end
end

    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
          expect('.border-width-alternate').to have_rule(rule)
    end
  end
    
      context 'called with one size' do
    it 'applies same width to both height and width' do
      rule = 'height: 10px; width: 10px;'