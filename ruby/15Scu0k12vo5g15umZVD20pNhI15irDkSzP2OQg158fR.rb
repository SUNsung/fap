
        
              new_initial_revision_var = 'HOMEBREW_UPDATE_BEFORE#{repo_var}'
      new_current_revision_var = 'HOMEBREW_UPDATE_AFTER#{repo_var}'
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
          private
    
          def trusted?
        @trusted
      end