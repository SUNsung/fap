
        
        require 'benchmark/ips'
require 'jekyll'
require 'json'
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
            a_length = a_split.length
        b_length = b_split.length
    
        def base_url
      context[:base_url]
    end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
      def send_reset_password_instructions
    Workers::ResetPassword.perform_async(self.id)
  end
    
    require_relative '../config/bundler_helper'
require 'etc'
    
      rescue_from ActiveRecord::RecordNotFound do
    head :not_found
  end
    
      def create
    like = like_service.create(params[:post_id])
  rescue ActiveRecord::RecordNotFound, ActiveRecord::RecordInvalid
    render plain: I18n.t('likes.create.error'), status: 422
  else
    respond_to do |format|
      format.html { head :created }
      format.mobile { redirect_to post_path(like.post_id) }
      format.json { render json: like.as_api_response(:backbone), status: 201 }
    end
  end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
      it 'denies post requests with wrong X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => bad_token)
    expect(last_response).not_to be_ok
  end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to eq('connect-src 'self'; default-src none; img-src 'self'; report-uri /my_amazing_csp_report_parser; script-src 'self'; style-src 'self'')
  end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          it 'returns false for `#{source}`' do
        expect(node.recursive_literal?).to be(false)
      end
    end
    
          it { expect(class_node.parent_class.const_type?).to be(true) }
    end
    
            def correct(processed_source, node)
          return if %i[kwarg kwoptarg].include?(node.type)
    
            expect(new_source).to eq(<<~RUBY)
          some_method #{open}
    
        it 'is aware that this creates a new scope' do
      expect_no_offenses(<<~RUBY)
        module SomeModule
          extend ActiveSupport::Concern
          class_methods do
            def some_public_class_method
            end
            private
            def some_private_class_method
            end
          end
          def some_public_instance_method
          end
          private
          def some_private_instance_method
          end
        end
      RUBY
    end
  end