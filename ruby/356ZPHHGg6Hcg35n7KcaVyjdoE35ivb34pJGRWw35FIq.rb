
        
          def package(gem, ext='')
    'pkg/#{gem}-#{source_version}' + ext
  end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
      it 'should not set the Content Security Policy for other content types' do
    headers = get('/', {}, 'wants' => 'text/foo').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
          def right_diff_line_number(id, line)
        if line =~ /^@@/
          m, ri                   = *line.match(/\+(\d+)/)
          @right_diff_line_number = ri.to_i
          @current_line_number    = @right_diff_line_number
          ret                     = '...'
        elsif line[0] == ?-
          ret = ' '
        elsif line[0] == ?+
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        else
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        end
        ret
      end
    end
  end
end

    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@page.wiki.user_icons}')
        else
          super
        end
      end
    
        assert body.include?('Bilbo Baggins'), '/pages should include the page 'Bilbo Baggins''
    assert body.include?('Gondor'), '/pages should include the folder 'Gondor''
    assert !body.include?('Boromir'), '/pages should NOT include the page 'Boromir''
    assert body.include?('Mordor'), '/pages should include the folder 'Mordor''
    assert !body.include?('Eye Of Sauron'), '/pages should NOT include the page 'Eye Of Sauron''
    assert !body.match(/(Zamin).+(roast\-mutton)/m), '/pages should be sorted alphabetically'
  end
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('PG')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end
    
        it 'rejects invalid jsfiddle link' do
      expect do
        generate_new_liquid('invalid_jsfiddle_link')
      end.to raise_error(StandardError)
    end
    
      def permitted_attributes_for_update
    %i[body_markdown receive_notifications]
  end
    
          it 'unmutes the parent comment if already muted' do
        sign_in original_commenter
        parent_comment_by_og.update(receive_notifications: false)
        patch '/comment_mutes/#{parent_comment_by_og.id}', params: { comment: { receive_notifications: 'true' } }
        expect(parent_comment_by_og.reload.receive_notifications).to eq true
      end
    end