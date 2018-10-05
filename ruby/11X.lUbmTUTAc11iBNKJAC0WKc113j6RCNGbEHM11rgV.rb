
        
        def global_require
  JSON.pretty_generate(DATA)
end
    
    require 'benchmark/ips'
require 'pathutil'
    
          #
    
    Gem::Specification.new do |s|
  s.specification_version = 2 if s.respond_to? :specification_version=
  s.required_rubygems_version = Gem::Requirement.new('>= 0') if s.respond_to? :required_rubygems_version=
  s.rubygems_version = '2.2.2'
  s.required_ruby_version = '>= 2.3.0'
    
            def gemfile_contents
          <<~RUBY
            source 'https://rubygems.org'
            # Hello! This is where you manage which Jekyll version is used to run.
            # When you want to use a different version, change it below, save the
            # file and run `bundle install`. Run Jekyll with `bundle exec`, like so:
            #
            #     bundle exec jekyll serve
            #
            # This will help ensure the proper Jekyll version is running.
            # Happy Jekylling!
            gem 'jekyll', '~> #{Jekyll::VERSION}'
            # This is the default theme for new Jekyll sites. You may change this to anything you like.
            gem 'minima', '~> 2.0'
            # If you want to use GitHub Pages, remove the 'gem 'jekyll'' above and
            # uncomment the line below. To upgrade, run `bundle update github-pages`.
            # gem 'github-pages', group: :jekyll_plugins
            # If you have any plugins, put them here!
            group :jekyll_plugins do
              gem 'jekyll-feed', '~> 0.6'
            end
            # Windows does not include zoneinfo files, so bundle the tzinfo-data gem
            gem 'tzinfo-data', platforms: [:mingw, :mswin, :x64_mingw, :jruby]
            # Performance-booster for watching directories on Windows
            gem 'wdm', '~> 0.1.0' if Gem.win_platform?
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
            def convert(content)
          document = Kramdown::Document.new(content, @config)
          html_output = document.to_html
          if @config['show_warnings']
            document.warnings.each do |warning|
              Jekyll.logger.warn 'Kramdown warning:', warning
            end
          end
          html_output
        end
    
    module Jekyll
  module Deprecator
    extend self
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
    And /^I should be able to friend '([^\']*)'$/ do |email|
  user = User.find_by_email(email)
  step 'I should see a '.aspect-dropdown''
  step 'I should see \'#{user.name}\''
end
    
    module UserCukeHelpers
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
      end