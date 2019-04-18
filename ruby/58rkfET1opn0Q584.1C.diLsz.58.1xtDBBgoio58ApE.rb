describe BuildEnvironment do
  alias_matcher :use_userpaths, :be_userpaths
    
          it 'gives dir where zsh completions have been installed' do
        (path/'share/zsh/site-functions').mkpath
        expect(caveats).to include(HOMEBREW_PREFIX/'share/zsh/site-functions')
      end
    
    When /^(?:|I )go to (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
        # Returns the Rails.root constant.
    def rails_root attachment, style_name
      Rails.root
    end