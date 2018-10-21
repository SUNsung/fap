
        
            if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          generate_helpers!(Devise::URL_HELPERS)
    
          def store_index(store, filename, index)
        old_json = store.read(filename) || '{}'
        new_json = index.to_json
        instrument '#{filename.remove('.json')}.doc', before: old_json, after: new_json
        store.write(filename, new_json)
      end
    
        def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def process_response?(response)
      raise NotImplementedError
    end
    
          clear_cache
      super(new_user, new_repo)
    
          def js # custom js
        @js
      end
    
        get '/pages'
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
      def app
    Precious::App
  end
end