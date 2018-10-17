
        
                case array.length
        when 0
          ''.html_safe
        when 1
          ERB::Util.html_escape(array[0])
        when 2
          safe_join([array[0], array[1]], options[:two_words_connector])
        else
          safe_join([safe_join(array[0...-1], options[:words_connector]), options[:last_word_connector], array[-1]], nil)
        end
      end
    end
  end
end

    
              def retrieve_object(object)
            if object
              object
            elsif @template_object.instance_variable_defined?('@#{@object_name}')
              @template_object.instance_variable_get('@#{@object_name}')
            end
          rescue NameError
            # As @object_name may contain the nested syntax (item[subobject]) we need to fallback to nil.
            nil
          end
    
              def render_collection
            @collection.map do |item|
              value = value_for_collection(item, @value_method)
              text  = value_for_collection(item, @text_method)
              default_html_options = default_html_options_for_collection(item, value)
              additional_html_options = option_html_attributes(item)
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class CollectionRadioButtons < Base # :nodoc:
        include CollectionHelpers
    
        initializer 'action_view.setup_action_pack' do |app|
      ActiveSupport.on_load(:action_controller) do
        ActionView::RoutingUrlFor.include(ActionDispatch::Routing::UrlFor)
      end
    end
    
    Capybara.register_driver :poltergeist do |app|
  Capybara::Poltergeist::Driver.new(app, timeout: 30)
end
    
      # fill out the fields on the sign_in page and press submit
  def login_as(user, pass)
    fill_in 'user_username', :with=>user
    fill_in 'user_password', :with=>pass
    click_button 'Sign in'
  end