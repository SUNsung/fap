
        
          def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
              if File.extname(file) == '.rb'
            tree[subtree] ||= []
            tree[subtree] << file
          end
        end
      end
    
      def migrate_formula_rename
    report[:R].each do |old_full_name, new_full_name|
      old_name = old_full_name.split('/').last
      next unless (dir = HOMEBREW_CELLAR/old_name).directory? && !dir.subdirs.empty?
    
          UI.user_error!('Unable to find Crashlytics Run Script Build Phase') if crash_script.nil?
    
          it 'raises an exception when use passes workspace' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_build_number(xcodeproj: 'project.xcworkspace')
          end').runner.execute(:test)
        end.to raise_error('Please pass the path to the project, not the workspace')
      end
    
    profile = Profile.new
# puts profile.generate
command = ['/usr/bin/sandbox-exec', '-p', profile.generate, profile.pod_bin, *ARGV]
exec(*command)

    
          def initialize(argv)
        super
        config.silent = false
      end
    
            podfile
      end
    
          private