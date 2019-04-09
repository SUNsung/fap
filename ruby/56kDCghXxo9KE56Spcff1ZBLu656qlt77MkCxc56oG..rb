
        
        module ActionView
  module Helpers
    module Tags # :nodoc:
      class CollectionRadioButtons < Base # :nodoc:
        include CollectionHelpers
    
            def ==(type)
          @symbol == type.to_sym unless type.blank?
        end
      end
    
            @status = status
      end
    
                  Jekyll.logger.info 'LiveReload address:',
                                 'http://#{opts['host']}:#{opts['livereload_port']}'
            end
          end
          @thread.abort_on_exception = true
        end
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
          # renders hidden field and link to remove record using nested_attributes
      def link_to_icon_remove_fields(form)
        url = form.object.persisted? ? [:admin, form.object] : '#'
        link_to_with_icon('delete', '', url,
                          class: 'spree_remove_fields btn btn-sm btn-danger',
                          data: {
                            action: 'remove'
                          },
                          title: Spree.t(:remove),
                          no_text: true
                         ) + form.hidden_field(:_destroy)
      end
    
            # Return if resource is found and user is not allowed to :admin
        return '' if (klass = klass_for(options[:label])) && cannot?(:admin, klass)
    
          within('.table') do
        expect(page).to have_content('19.99')
        expect(page).to have_content('black')
        expect(page).to have_content('A100')
      end
    end
  end
end

    
          if simple_current_order.nil? || simple_current_order.item_count.zero?
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{Spree.t('empty')})'
        css_class = 'empty'
      else
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{simple_current_order.item_count})
                <span class='amount'>#{simple_current_order.display_total.to_html}</span>'
        css_class = 'full'
      end
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
            private
    
                result = advance_service.call(order: spree_current_order)