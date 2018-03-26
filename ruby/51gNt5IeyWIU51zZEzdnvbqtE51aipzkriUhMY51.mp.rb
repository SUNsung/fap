        # With reconfirmable, notify the original email when the user first
        # requests the email change, instead of when the change is confirmed.
        def send_email_changed_notification?
          if self.class.reconfirmable
            self.class.send_email_changed_notification && reconfirmation_required?
          else
            super
          end
        end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
      def app
    Rails.application
  end
end

    
        respond_to do |format|
      format.html
      format.json { render json: @events }
    end
  end
    
      def test_keep_if
    h1 = {}
    ENV.each_pair {|k, v| h1[k] = v }
    ENV['test'] = 'foo'
    ENV.keep_if {|k, v| IGNORE_CASE ? k.upcase != 'TEST' : k != 'test' }
    h2 = {}
    ENV.each_pair {|k, v| h2[k] = v }
    assert_equal(h1, h2)
    
        ret = set.reject! { |i| i % 3 == 0 }
    assert_same(set, ret)
    assert_equal(Set[1,2,4,5,7,8,10], set)
    
      def test_strftime
    t2000 = get_t2000
    t = Time.at(946684800).getlocal
    assert_equal('Sat', t2000.strftime('%a'))
    assert_equal('Saturday', t2000.strftime('%A'))
    assert_equal('Jan', t2000.strftime('%b'))
    assert_equal('January', t2000.strftime('%B'))
    assert_kind_of(String, t2000.strftime('%c'))
    assert_equal('01', t2000.strftime('%d'))
    assert_equal('00', t2000.strftime('%H'))
    assert_equal('12', t2000.strftime('%I'))
    assert_equal('001', t2000.strftime('%j'))
    assert_equal('01', t2000.strftime('%m'))
    assert_equal('00', t2000.strftime('%M'))
    assert_equal('AM', t2000.strftime('%p'))
    assert_equal('00', t2000.strftime('%S'))
    assert_equal('00', t2000.strftime('%U'))
    assert_equal('00', t2000.strftime('%W'))
    assert_equal('6', t2000.strftime('%w'))
    assert_equal('01/01/00', t2000.strftime('%x'))
    assert_equal('00:00:00', t2000.strftime('%X'))
    assert_equal('00', t2000.strftime('%y'))
    assert_equal('2000', t2000.strftime('%Y'))
    assert_equal('UTC', t2000.strftime('%Z'))
    assert_equal('%', t2000.strftime('%%'))
    assert_equal('0', t2000.strftime('%-S'))
    assert_equal('12:00:00 AM', t2000.strftime('%r'))
    assert_equal('Sat 2000-01-01T00:00:00', t2000.strftime('%3a %FT%T'))
    
        def alive?
      @alive
    end
    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
    Note that you will likely need to have opened the app at least
once for any login items to be present.
    
    With optional '-t <bundle-id>', silently test if a given app
is running, exiting with an error code if not.
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
      # GET /books/1
  # GET /books/1.json
  def show
  end
    
              ->(corrector) { corrector.replace(node.source_range, new_source) }
        end
      end
    end
  end
end

    
            def on_def(node)
          _method, arguments, = *node
          arguments = *arguments
    
          def extract_metrics(path, *keys)
        snapshot.metric_store.extract_metrics(path, *keys)
      end
    end
  end
end

    
      module Number0
  end