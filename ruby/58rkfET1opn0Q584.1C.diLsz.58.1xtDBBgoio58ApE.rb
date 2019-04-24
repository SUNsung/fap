
        
            def value_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:likes_given)[0] || 0
    end
    
        def data_url_string?(str)
      str.start_with?(DATA_URL)
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
    Given /^I run a migration$/ do
  step %[I successfully run `rake db:migrate --trace`]
end
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end