
        
            context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
          attr_accessor :description
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          if options[:skip_helpers] == true
        @used_helpers = @used_routes
      elsif skip = options[:skip_helpers]
        @used_helpers = self.routes - Array(skip).map(&singularizer)
      else
        @used_helpers = self.routes
      end
    end
  end
end

    
      def with_reopen(io, arg)
    old = io.dup
    io.reopen(arg)
    yield old
  ensure
    io.reopen(old)
    old.close
  end
    
      it 'returns nil if then-body is empty, expression is true and else part is empty' do
    if true
    else
    end.should == nil
  end
    
      def test_compile_insn_opt_length_size
    assert_compile_once('#{<<~'begin;'}\n#{<<~'end;'}', result_inspect: '4', insns: %i[opt_length opt_size])
    begin;
      array = [1, 2]
      array.length + array.size
    end;
  end
    
      def test_keyword_splat
    assert_valid_syntax('foo(**h)', __FILE__)
    o = KW2.new
    h = {k1: 11, k2: 12}
    assert_equal([11, 12], o.kw(**h))
    assert_equal([11, 12], o.kw(k2: 22, **h))
    assert_equal([11, 22], o.kw(**h, **{k2: 22}))
    assert_equal([11, 12], o.kw(**{k2: 22}, **h))
  end
    
        fmt = %w(Y m d).map { |x| '%#{x}' }.join('-') # defeats optimization
    t = Time.at(0).getutc
    ObjectSpace.count_objects(res = {}) # creates strings on first call
    before = ObjectSpace.count_objects(res)[:T_STRING]
    val = t.strftime(fmt)
    after = ObjectSpace.count_objects(res)[:T_STRING]
    assert_equal before + 1, after, 'only new string is the created one'
    assert_equal '1970-01-01', val
  end
    
            private