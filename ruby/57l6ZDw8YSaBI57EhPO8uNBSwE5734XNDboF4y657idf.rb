
        
          # True if a {Formula} is being built with {Formula.head} instead of {Formula.stable}.
  # <pre>args << '--some-new-stuff' if build.head?</pre>
  # <pre># If there are multiple conditional arguments use a block instead of lines.
  #  if build.head?
  #    args << '--i-want-pizza'
  #    args << '--and-a-cold-beer' if build.with? 'cold-beer'
  #  end</pre>
  def head?
    include? 'HEAD'
  end
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
        root.children.sort.each do |pn|
      if pn.directory?
        dirs << pn
      elsif block_given? && yield(pn)
        puts pn
        other = 'other '
      else
        remaining_root_files << pn unless pn.basename.to_s == '.DS_Store'
      end
    end
    
      def shorten_revision(revision)
    Utils.popen_read('git', '-C', HOMEBREW_REPOSITORY, 'rev-parse', '--short', revision).chomp
  end
    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
        describe 'with an IPA file for iOS' do
      it 'uploads the IPA for the iOS platform' do
        expect_any_instance_of(FastlaneCore::IpaUploadPackageBuilder).to receive(:generate)
          .with(app_id: 'YI8C2AS', ipa_path: 'ACME.ipa', package_path: '/tmp', platform: 'ios')
          .and_return('path')
        expect(transporter).to receive(:upload).with('YI8C2AS', 'path').and_return(true)
        runner.upload_binary
      end
    end
    
          before do
        base_dir = FileUtils.mkdir_p(File.join(tmpdir, 'review_information'))
        {
          first_name: 'Alice',
          last_name: 'Smith',
          phone_number: '+819012345678',
          email_address: 'deliver@example.com',
          demo_user: 'user',
          demo_password: 'password',
          notes: 'This is a note from file'
        }.each do |prefix, text|
          create_metadata(File.join(base_dir, '#{prefix}.txt'), text)
        end
      end
    
            return link + '?' + url_params.join('&')
      end
    
          it 'requires the passwords to match' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Create User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end