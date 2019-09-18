
        
              m1 = NumericData.find_by(
        bank_balance: BigDecimal('NaN'),
        big_bank_balance: BigDecimal('NaN')
      )
    
        if authenticated && resource = warden.user(resource_name)
      flash[:alert] = I18n.t('devise.failure.already_authenticated')
      redirect_to after_sign_in_path_for(resource)
    end
  end
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
          # Pure data class which describes an umbrella target.
      #
      class UmbrellaTargetDescription
        # @return [Xcodeproj::Project] The user project into which this target
        #         is integrated.
        #
        attr_reader :user_project
    
          # Creates a default app host 'main.m' file.
      #
      # @param  [Project] project
      #         the Xcodeproj to generate the target into.
      #
      # @param  [Symbol] platform
      #         the platform of the target. Can be `:ios` or `:osx`.
      #
      # @param  [String] name
      #         The name of the folder to use and save the generated main file.
      #
      # @return [Pathname] the new source file that was generated.
      #
      def self.create_app_host_main_file(project, platform, name = 'App')
        source_file = project.path.dirname.+('#{name}/main.m')
        source_file.parent.mkpath
        source_file.open('w') do |f|
          case platform
          when :ios, :tvos
            f << IOS_APP_HOST_MAIN_CONTENTS
          when :osx
            f << MACOS_APP_HOST_MAIN_CONTENTS
          end
        end
        source_file
      end
    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end

    
      require 'cocoapods/gem_version'
  require 'cocoapods/version_metadata'
  require 'cocoapods-core'
  require 'cocoapods/config'
  require 'cocoapods/downloader'
    
            case a
        when 0 then 'just now'
        when 1 then 'a second ago'
        when 2..59 then a.to_s + ' seconds ago'
        when 60..119 then 'a minute ago' # 120 = 2 minutes
        when 120..3540 then (a / 60).to_i.to_s + ' minutes ago'
        when 3541..7100 then 'an hour ago' # 3600 = 1 hour
        when 7101..82_800 then ((a + 99) / 3600).to_i.to_s + ' hours ago'
        when 82_801..172_000 then 'a day ago' # 86400 = 1 day
        when 172_001..518_400 then ((a + 800) / (60 * 60 * 24)).to_i.to_s + ' days ago'
        when 518_400..1_036_800 then 'a week ago'
        when 1_036_801..4_147_204 then ((a + 180_000) / (60 * 60 * 24 * 7)).to_i.to_s + ' weeks ago'
        else date.strftime('%d %b %Y')
        end
      end
    end
  end
end

    
        it 'should create a new dir for the newly created pod' do
      @sut.any_instance.stubs(:configure_template)
      url = @sut::TEMPLATE_REPO
      @sut.any_instance.expects(:git!).with(['clone', url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod')
    end
    
      config.vm.define 'centos7' do |centos7|
    centos7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
        # If the package output (-p flag) is a directory, write to the default file name
    # but inside that directory.
    if ! package.nil? && File.directory?(package)
      package_file = File.join(package, output.to_s)
    else
      package_file = output.to_s(package)
    end
    
        self.name = [attributes[:npm_package_name_prefix], name].join('-')
    self.version = info.fetch('version', '0.0.0')
    
      # scripts_path and write_scripts cribbed from deb.rb
  def scripts_path(path=nil)
    @scripts_path ||= build_path('Scripts')
    FileUtils.mkdir(@scripts_path) if !File.directory?(@scripts_path)
    
        File.write(build_path('packlist'), files.sort.join('\n'))