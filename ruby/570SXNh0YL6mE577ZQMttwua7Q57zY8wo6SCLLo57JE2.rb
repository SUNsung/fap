
        
              it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
          it 'increments the build number of the Xcode project' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.1.0/)
      end
    
              box_name     = argv[0]
          box_provider = argv[1].to_sym
          box_version  = argv[2]
    
            # Otherwise, call it
        cap_host.capability(name, *argv)
    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
        # The repository path according to the context
    def repo_path
      context.repo_path
    end
    
      desc 'Finish the deployment, clean up server(s).'
  task :finishing do
  end
    
    describe 'border-color' do
  before(:all) do
    ParserSupport.parse_file('library/border-color')
  end
    
          expect('.all-buttons-focus').to have_ruleset(ruleset)
    end
  end