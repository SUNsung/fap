
        
            browser_launched = false
    Jekyll::Hooks.register :site, :post_write do |_site|
      next if browser_launched
      browser_launched = true
      Jekyll.logger.info 'Opening in browser...'
      Launchy.open('http://localhost:4000')
    end
    
        context 'post content has highlight tag with only preceding spaces' do
      setup do
        fill_post <<~EOS
               [,1] [,2]
          [1,] FALSE TRUE
          [2,] FALSE TRUE
        EOS
      end
    
    require 'rdoc/task'
Rake::RDocTask.new do |rdoc|
  rdoc.rdoc_dir = 'rdoc'
  rdoc.title = '#{name} #{version}'
  rdoc.rdoc_files.include('README*')
  rdoc.rdoc_files.include('lib/**/*.rb')
end
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
              @websockets << websocket
        end
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true