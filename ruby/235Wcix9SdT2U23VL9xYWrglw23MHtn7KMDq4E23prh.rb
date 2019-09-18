
        
                  resource 'setuptools' do
          ^^^^^^^^^^^^^^^^^^^^^ Formulae using virtualenvs do not need a `setuptools` resource.
            url 'https://foo.com/foo.tar.gz'
            sha256 'db0904a28253cfe53e7dedc765c71596f3c53bb8a866ae50123320ec1a7b73fd'
          end
    
          def provides_sdk?
        version >= '8'
      end
    
        def initialize(cask, force: false, quarantine: nil)
      @cask = cask
      @force = force
      @quarantine = quarantine
    end
    
          def test_s_new_exc_tainted
        th = Thread.new {
          $SAFE=1
          str = 'ConnectionEvents'
          str.taint
          WIN32OLE_EVENT.new(@db, str)
        }
        exc = assert_raise(SecurityError) {
          th.join
        }
        assert_match(/insecure event creation - `ConnectionEvents'/, exc.message)
      ensure
        $SAFE = 0
      end
    end
  end
end

    
      before :each do
    @data = 'firstline\nsecondline\n\nforthline'
    @zip = [31, 139, 8, 0, 244, 125, 128, 88, 2, 255, 75, 203, 44, 42, 46, 201,
            201, 204, 75, 229, 42, 78, 77, 206, 207, 75, 1, 51, 185, 210,242,
            139, 74, 50, 64, 76, 0, 180, 54, 61, 111, 31, 0, 0, 0].pack('C*')
    
    end

    
        # Returns a new {Gem::Version} based on the systems `git` version.
    #
    # @return [Gem::Version]
    #
    def self.git_version
      raw_version = Executable.capture_command('git', ['--version']).first
      unless match = raw_version.scan(/\d+\.\d+\.\d+/).first
        raise 'Failed to extract git version from `git --version` (#{raw_version.inspect})'
      end
      Gem::Version.new(match)
    end
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
            def prepare(sandbox, project, pod_targets, build_configurations, platforms, podfile_path)
          UI.message '- Creating #{project.project_name} project' do
            build_configurations.each do |name, type|
              project.add_build_configuration(name, type)
            end
            # Reset symroot just in case the user has added a new build configuration other than 'Debug' or 'Release'.
            project.symroot = Pod::Project::LEGACY_BUILD_ROOT
            pod_names = pod_targets.map(&:pod_name).uniq
            pod_names.each do |pod_name|
              local = sandbox.local?(pod_name)
              path = sandbox.pod_dir(pod_name)
              was_absolute = sandbox.local_path_was_absolute?(pod_name)
              project.add_pod_group(pod_name, path, local, was_absolute)
            end
            if podfile_path
              project.add_podfile(podfile_path)
            end
            osx_deployment_target = platforms.select { |p| p.name == :osx }.map(&:deployment_target).min
            ios_deployment_target = platforms.select { |p| p.name == :ios }.map(&:deployment_target).min
            watchos_deployment_target = platforms.select { |p| p.name == :watchos }.map(&:deployment_target).min
            tvos_deployment_target = platforms.select { |p| p.name == :tvos }.map(&:deployment_target).min
            project.build_configurations.each do |build_configuration|
              build_configuration.build_settings['MACOSX_DEPLOYMENT_TARGET'] = osx_deployment_target.to_s if osx_deployment_target
              build_configuration.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = ios_deployment_target.to_s if ios_deployment_target
              build_configuration.build_settings['WATCHOS_DEPLOYMENT_TARGET'] = watchos_deployment_target.to_s if watchos_deployment_target
              build_configuration.build_settings['TVOS_DEPLOYMENT_TARGET'] = tvos_deployment_target.to_s if tvos_deployment_target
              build_configuration.build_settings['STRIP_INSTALLED_PRODUCT'] = 'NO'
              build_configuration.build_settings['CLANG_ENABLE_OBJC_ARC'] = 'YES'
            end
          end
        end
      end
    end
  end
end

    
            if podspecs.size <= 1
          result += [license, readme, podspecs, docs]
        else
          # Manually add non-globbing files since there are multiple podspecs in the same folder
          result << podspec_file
          if license_file = spec_license
            absolute_path = root + license_file
            result << absolute_path if File.exist?(absolute_path)
          end
        end
        result.compact.flatten.sort
      end
    
    module Pod
  # Provides support for UI output. It provides support for nested sections of
  # information and for a verbose mode.
  #
  module UserInterface
    require 'colored2'
    
        it 'returns nil if an article doesn't have a flare tag' do
      expect(described_class.new(article).tag_hash).to be nil
    end
    
      it 'renders a user index if there is a user with the username successfully' do
    expect(get: '/#{user.username}').to route_to(
      controller: 'stories',
      action: 'index',
      username: user.username,
    )
  end
    
        it 'embeds the published timestamp' do
      visit '/#{user.username}/#{article.slug}'
      selector = 'article time[datetime='#{timestamp}']'
      expect(page).to have_selector(selector)
    end
  end
end

    
        context 'exchange has not been requested' do
      before { allow(subject).to receive(:exchange_requested?).and_return(false) }
    
            context 'if the currency is different than the order's currency' do
          let(:currency) { 'GBP' }
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end