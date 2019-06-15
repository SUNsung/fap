
        
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
    
    FORWARD_SLASH = '/'.freeze
    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
          #
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end