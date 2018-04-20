
        
        html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
            target_module << if app.resolved_build_setting('SWIFT_OPTIMIZATION_LEVEL').values.any?
                           <<-RUBY
  # Comment the next line if you're not using Swift and don't want to use dynamic frameworks
  use_frameworks!
    
            sets = config.sources_manager.aggregate.all_sets
        sets.each { |set| UI.pod(set, :name_and_version) }
        UI.puts '\n#{sets.count} pods were found'
      end