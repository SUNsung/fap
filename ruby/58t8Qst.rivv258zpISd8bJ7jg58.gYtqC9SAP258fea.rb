
        
              # private
    
          def has_sidebar
        @sidebar = (@page.sidebar || false) if @sidebar.nil? && @page
        !!@sidebar
      end
    
    # Make sure we're in the test dir, the tests expect that to be the current
# directory.
TEST_DIR  = File.join(File.dirname(__FILE__), *%w[.])
    
        # TODO: Remove to_url once write_page changes are merged.
    @wiki.write_page('ééééé'.to_url, :markdown, '한글 text', commit_details)
    page = @wiki.page('eeeee')
    assert_equal '한글 text', utf8(page.raw_data)
  end
    
    desc 'Create a release build and push to rubygems'
task :release => :build do
  unless `git branch` =~ /^\* master$/
    puts 'You must be on the master branch to release!'
    exit!
  end
  sh 'git commit --allow-empty -a -m 'Release #{version}''
  sh 'git pull --rebase origin master'
  sh 'git tag v#{version}'
  sh 'git push origin master'
  sh 'git push origin v#{version}'
  sh 'gem push pkg/#{name}-#{version}.gem'
end
    
      s.add_dependency 'gollum-lib', '~> 4.2', '>= 4.2.10'
  s.add_dependency 'kramdown', '~> 1.9.0'
  s.add_dependency 'sinatra', '~> 1.4', '>= 1.4.4'
  s.add_dependency 'mustache', ['>= 0.99.5', '< 1.0.0']
  s.add_dependency 'useragent', '~> 0.16.2'
  s.add_dependency 'gemojione', '~> 3.2'