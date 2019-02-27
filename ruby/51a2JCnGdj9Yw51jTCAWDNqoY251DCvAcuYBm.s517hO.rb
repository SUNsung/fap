
        
                if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
      gem 'rb-fsevent'
  gem 'kicker'
  gem 'awesome_print'
  gem 'ruby-prof', :platforms => [:ruby]
end

    
      desc 'Check code against RuboCop rules'
  task :rubocop do
    sh 'bundle exec rubocop lib spec Rakefile'
  end
    
      def pod_prefix
    File.expand_path('../..', pod_bin)
  end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]