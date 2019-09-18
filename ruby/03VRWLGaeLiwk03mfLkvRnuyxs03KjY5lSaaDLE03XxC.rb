
        
              screenshots = Dir.glob('#{path}/**/*.{png,PNG}').uniq # uniq because thanks to {png,PNG} there are duplicates
    
    describe Spaceship::TestFlight::Build do
  let(:mock_client) { double('MockClient') }
    
          it 'raises an error if something is wrong' do
        TunesStubbing.itc_stub_broken_create
        expect do
          Spaceship::Tunes::Application.create!(name: 'My Name',
                                                sku: 'SKU123',
                                                bundle_id: 'net.sunapps.123')
        end.to raise_error('You must choose a primary language. You must choose a primary language.')
      end
    
            return return_val
      rescue => ex
        Dir.chdir(path_to_use) do
          # Provide error block exception without color code
          begin
            error_blocks[current_platform].call(current_lane, ex, parameters) if current_platform && error_blocks[current_platform]
            error_blocks[nil].call(current_lane, ex, parameters) if error_blocks[nil]
          rescue => error_block_exception
            UI.error('An error occurred while executing the `error` block:')
            UI.error(error_block_exception.to_s)
            raise ex # raise the original error message
          end
        end
    
          self.project.project_paths.each do |project_path|
        UI.verbose('Parsing project file '#{project_path}' to find selected provisioning profiles')
        UI.verbose('Finding provision profiles for '#{specified_configuration}'') if specified_configuration
    
    describe Deliver::SubmitForReview do
  let(:review_submitter) { Deliver::SubmitForReview.new }
    
          def self.is_supported?(platform)
        [:ios, :mac].include?(platform)
      end
    
          it 'prefers an explicitly specified changelog value' do
        values = Fastlane::FastFile.new.parse('lane :test do
          # changelog_from_git_commits sets this lane context variable
          Actions.lane_context[SharedValues::FL_CHANGELOG] = 'autogenerated changelog'
          pilot(changelog: 'custom changelog')
        end').runner.execute(:test)
    
          def is_create_page
        false
      end
    
          def has_path
        !@path.nil?
      end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end