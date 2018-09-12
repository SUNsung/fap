
        
        begin
  require 'cucumber/rake/task'
  Cucumber::Rake::Task.new(:features) do |t|
    t.profile = 'travis'
  end
  Cucumber::Rake::Task.new(:'features:html', 'Run Cucumber features and produce HTML output') do |t|
    t.profile = 'html_report'
  end
rescue LoadError
  desc 'Cucumber rake task not available'
  task :features do
    abort 'Cucumber rake task is not available. Be sure to install cucumber as a gem or plugin'
  end
end
    
    AfterConfiguration do |config|
  f = Jekyll::Cucumber::Formatter.new(nil, $stdout, {})
    
    require 'fileutils'
require 'jekyll'
require 'time'
require 'safe_yaml/load'
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
      describe 'down' do
    let :valid_options do
      super().merge('extract' => new_extract,
                    'template' => new_template)
    end
    
    
  # Jekyll hook - the generate method is called by jekyll, and generates all of the category pages.
  class GenerateCategories < Generator
    safe true
    priority :low
    
    
    
        def poster
      'poster='#{@poster}'' if @poster
    end