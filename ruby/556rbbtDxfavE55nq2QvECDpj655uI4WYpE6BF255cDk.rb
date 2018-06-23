
        
          def find_matching_tag(tag)
    if key?(tag)
      tag
    else
      find_altivec_tag(tag) || find_or_later_tag(tag)
    end
  end
    
        if RUBY_PATH.to_s !~ %r{^/System/Library/Frameworks/Ruby.framework/Versions/[12]\.[089]/usr/bin/ruby}
      s << ' => #{RUBY_PATH}'
    end
    s
  end
    
        unless formulae.empty?
      # Dump formula list.
      ohai title
      puts_columns(formulae)
    end
  end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end