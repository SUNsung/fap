
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
          if site.theme && site.theme.layouts_path.eql?(base)
        @base_dir = site.theme.root
        @path = site.in_theme_dir(base, name)
      else
        @base_dir = site.source
        @path = site.in_source_dir(base, name)
      end
      @relative_path = @path.sub(@base_dir, '')
    
          attr_accessor :description
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'get HG revision number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_build_number_repository(
            use_hg_revision_number: true
          )
        end').runner.execute(:test)
    
          def plugin_gem_names
        (Gem.loaded_specs.keys - ['capistrano']).grep(/capistrano/).sort
      end
    end
  end
end

    
      mkdir_p tasks_dir