
        
              def _routes
        @controller._routes if @controller.respond_to?(:_routes)
      end
    
                          until @when_connected.empty?
                        @when_connected.shift.call
                      end
                    end
    
      def test_assert_select_email_multipart
    AssertMultipartSelectMailer.test(html: '<div><p>foo</p><p>bar</p></div>', text: 'foo bar').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
end

    
      test 'does not append the deliveries collection if told not to perform the delivery' do
    old_perform_deliveries = DeliveryMailer.perform_deliveries
    begin
      DeliveryMailer.perform_deliveries = false
      DeliveryMailer.welcome.deliver_now
      assert_equal [], DeliveryMailer.deliveries
    ensure
      DeliveryMailer.perform_deliveries = old_perform_deliveries
    end
  end
    
        mail_with_defaults do |format|
      format.html { render(inline: '<%= format_paragraph @text, 15, 1 %>') }
    end
  end
    
          raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
      def grant_admin!
    set_permission('admin', true)
  end