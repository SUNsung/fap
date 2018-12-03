
        
        module Commander
  # This class override the run method with our custom stack trace handling
  # In particular we want to distinguish between user_error! and crash! (one with, one without stack trace)
  class Runner
    # Code taken from https://github.com/commander-rb/commander/blob/master/lib/commander/runner.rb#L50
    
          it 'allows you to specify your own message' do
        tag = '2.0.0'
        message = 'message'
    
          it 'Does not include merge commits in the list of commits' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(include_merges: false)
        end').runner.execute(:test)
    
    # remove (double and single) quote pairs
# un-double-double quote resulting string
def simulate_windows_shell_unwrapping(string)
  regex = /^('|')(([^'])(\S*)([^']))('|')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
    string.to_s.gsub!('''', ''') # remove double double quotes
  end
  return string
end
    
    # Show a warning for PRs that are Work In Progress
if (github.pr_body + github.pr_title).include?('WIP')
  warn('Pull Request is Work in Progress')
end
    
    class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
          it 'should not create the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).not_to exist
        expect(response.code).to eq('403')
      end
    end
  end