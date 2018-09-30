
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
          #
    
      s.rdoc_options = ['--charset=UTF-8']
  s.extra_rdoc_files = %w(README.markdown LICENSE)
    
                c.option 'force', '--force', 'Force creation even if PATH already exists'
            c.option 'blank', '--blank', 'Creates scaffolding but with empty files'
            c.option 'skip-bundle', '--skip-bundle', 'Skip 'bundle install''
    
    gem 'rake'
gem 'thor'
gem 'pry', '~> 0.11.0'
gem 'activesupport', '~> 5.2', require: false
gem 'yajl-ruby', require: false
    
        if version.present?
      doc = doc.versions.find { |klass| klass.version == version || klass.version_slug == version }
      raise DocNotFound.new(%(could not find version '#{version}' for doc '#{name}'), name) unless doc
    elsif version != false
      doc = doc.versions.first
    end
    
        def to_json
      JSON.generate(as_json)
    end
    
        def self.run(urls, options = {}, &block)
      urls = urls.dup
      requester = new(options)
      requester.on_response(&block) if block
      requester.on_response do # cheap hack to ensure root page is processed first
        if urls
          requester.request(urls)
          urls = nil
        end
      end
      requester.request(urls.shift)
      requester.run
      requester
    end
    
            subclass.class_eval do
          extend AutoloadHelper
          autoload_all 'docs/filters/#{to_s.demodulize.underscore}', 'filter'
        end