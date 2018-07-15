
        
              if ARGV.git?
        system 'git', 'init'
        system 'git', 'add', '-A'
      end
      if ARGV.interactive?
        ohai 'Entering interactive mode'
        puts 'Type `exit' to return and finalize the installation'
        puts 'Install to this prefix: #{formula.prefix}'
    
      def merge(*args)
    @settings.merge(*args)
    self
  end
    
            next unless HOMEBREW_CELLAR.directory?
    
      def internal_development_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
      def search_taps(rx)
    SEARCHABLE_TAPS.map do |user, repo|
      Thread.new { search_tap(user, repo, rx) }
    end.inject([]) do |results, t|
      results.concat(t.value)
    end
  end
    
          def initialize(gradle_path: nil)
        self.gradle_path = gradle_path
      end
    
            expect(result).to eq('git rev-parse --short HEAD')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git rev-parse --short HEAD')
      end
    end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to end_with('&& agvtool new-marketing-version 1.77.3')
      end
    
        projects
  end
end

    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        options[:title] = false
    options[:root_title] = 'PHP: Hypertext Preprocessor'
    options[:skip_links] = ->(filter) { !filter.initial_page? }
    
          options[:only_patterns] = [
        /\Aget_started/,
        /\Aprogrammers_guide/,
        /\Atutorials/,
        /\Aperformance/,
        /\Adeploy/,
        /\Aextend/]
    end
    
        for_each_gem do |gem_path|
      sh 'gem push '#{gem_path}''
    end
  end
end