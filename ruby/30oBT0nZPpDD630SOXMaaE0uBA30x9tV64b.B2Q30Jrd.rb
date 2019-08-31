
        
            def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            css('pre[name]').each do |node|
          node.before(%(<div class='pre-title'>#{node['name']}</div>))
        end
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
          protected
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
          converted_row = row.collect do |field|
        quote(field)
      end
      line = converted_row.join(@column_separator) + @row_separator
      if @output_encoding
        line = line.encode(@output_encoding)
      end
      @output << line
    
      def test_marshal_dump_ivar
    s = 'data with ivar'
    s.instance_variable_set(:@t, 42)
    t = Bug8276.new(s)
    s = Marshal.dump(t)
    assert_raise(FrozenError) {Marshal.load(s)}
  end
    
      before :each do
    @data = '{'a':1234}'
    @zip = [31, 139, 8, 0, 0, 0, 0, 0, 0, 3, 171, 86, 74, 84, 178, 50,
            52, 50, 54, 169, 5, 0, 196, 20, 118, 213, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
    end

    
        gz.read 5
    gz.pos.should == 5
    
      def dashboard
    gon.push(pod_version: pod_version)
  end
    
          def render_error(error_description, detailed_error=nil)
        @error_description = error_description
        @detailed_error = detailed_error
        if request.format == :mobile
          render 'api/openid_connect/error/error.mobile', layout: 'application.mobile'
        else
          render 'api/openid_connect/error/error', layout: 'with_header_with_footer'
        end
      end
    end
  end
end

    
        raise ActiveRecord::RecordNotFound unless membership.present?
    
        respond_to do |format|
      format.html
      format.xml { render :xml => @notifications.to_xml }
      format.json {
        render json: render_as_json(@unread_notification_count, @grouped_unread_notification_counts, @notifications)
      }
    end
  end