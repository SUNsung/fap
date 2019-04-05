
        
              if existing == nil or value > existing then
        redis.call('set', key, value)
        redis.call('expire', key, ttl)
        return true
      else
        return false
      end
      EOF
    
              Gitlab::Database.bulk_insert(LabelLink.table_name, rows)
        end
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
        it 'interpolates jsonpath expressions between matching <>'s' do
      expect(Utils.interpolate_jsonpaths('hello <$.there.world> this <escape works>', payload)).to eq('hello WORLD this should+work')
    end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
        alias_method :insert_before, :insert
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
      prepend_before_action :assert_is_devise_resource!
  respond_to :html if mimes_for_respond_to.empty?
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
    end
    
          protected
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
              # Return the registry
          data[:command]
        end
    
              # Handle the case that argv was empty or didn't contain any subcommand
          main_args = argv.dup if main_args.nil?
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
        # Get a value by the given key.
    #
    # This will evaluate the block given to `register` and return the
    # resulting value.
    def get(key)
      return nil if !@items.key?(key)
      return @results_cache[key] if @results_cache.key?(key)
      @results_cache[key] = @items[key].call
    end
    alias :[] :get
    
          # Regression test for #4004
      it 'is able to go from page to page for incomplete orders' do
        Spree::Order.destroy_all
        2.times { Spree::Order.create! email: 'incomplete@example.com', completed_at: nil, state: 'cart' }
        click_on 'Filter'
        uncheck 'q_completed_at_not_null'
        click_on 'Filter Results'
        within('.pagination') do
          click_link '2'
        end
        expect(page).to have_content('incomplete@example.com')
        expect(find('#q_completed_at_not_null')).not_to be_checked
      end
    end
    
          within('#sidebar') { click_link 'Variants' }
      click_link 'New Variant'
    
              scope = scope.not_deleted unless params[:show_deleted]
          scope = scope.not_discontinued unless params[:show_discontinued]
        else
          scope = Product.accessible_by(current_ability, :read).active.includes(*product_includes)
        end
    
            def find_product
          super(params[:id])
        end