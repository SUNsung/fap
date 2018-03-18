
        
              # Returns an HTML tag.
      #
      # === Building HTML tags
      #
      # Builds HTML5 compliant tags with a tag proxy. Every tag can be built with:
      #
      #   tag.<tag name>(optional content, options)
      #
      # where tag name can be e.g. br, div, section, article, or any tag really.
      #
      # ==== Passing content
      #
      # Tags can pass content to embed within it:
      #
      #   tag.h1 'All titles fit to print' # => <h1>All titles fit to print</h1>
      #
      #   tag.div tag.p('Hello world!')  # => <div><p>Hello world!</p></div>
      #
      # Content can also be captured with a block, which is useful in templates:
      #
      #   <%= tag.p do %>
      #     The next great American novel starts here.
      #   <% end %>
      #   # => <p>The next great American novel starts here.</p>
      #
      # ==== Options
      #
      # Use symbol keyed options to add attributes to the generated tag.
      #
      #   tag.section class: %w( kitties puppies )
      #   # => <section class='kitties puppies'></section>
      #
      #   tag.section id: dom_id(@post)
      #   # => <section id='<generated dom id>'></section>
      #
      # Pass +true+ for any attributes that can render with no values, like +disabled+ and +readonly+.
      #
      #   tag.input type: 'text', disabled: true
      #   # => <input type='text' disabled='disabled'>
      #
      # HTML5 <tt>data-*</tt> attributes can be set with a single +data+ key
      # pointing to a hash of sub-attributes.
      #
      # To play nicely with JavaScript conventions, sub-attributes are dasherized.
      #
      #   tag.article data: { user_id: 123 }
      #   # => <article data-user-id='123'></article>
      #
      # Thus <tt>data-user-id</tt> can be accessed as <tt>dataset.userId</tt>.
      #
      # Data attribute values are encoded to JSON, with the exception of strings, symbols and
      # BigDecimals.
      # This may come in handy when using jQuery's HTML5-aware <tt>.data()</tt>
      # from 1.4.3.
      #
      #   tag.div data: { city_state: %w( Chicago IL ) }
      #   # => <div data-city-state='[&quot;Chicago&quot;,&quot;IL&quot;]'></div>
      #
      # The generated attributes are escaped by default. This can be disabled using
      # +escape_attributes+.
      #
      #   tag.img src: 'open & shut.png'
      #   # => <img src='open &amp; shut.png'>
      #
      #   tag.img src: 'open & shut.png', escape_attributes: false
      #   # => <img src='open & shut.png'>
      #
      # The tag builder respects
      # {HTML5 void elements}[https://www.w3.org/TR/html5/syntax.html#void-elements]
      # if no content is passed, and omits closing tags for those elements.
      #
      #   # A standard element:
      #   tag.div # => <div></div>
      #
      #   # A void element:
      #   tag.br  # => <br>
      #
      # === Legacy syntax
      #
      # The following format is for legacy syntax support. It will be deprecated in future versions of Rails.
      #
      #   tag(name, options = nil, open = false, escape = true)
      #
      # It returns an empty HTML tag of type +name+ which by default is XHTML
      # compliant. Set +open+ to true to create an open tag compatible
      # with HTML 4.0 and below. Add HTML attributes by passing an attributes
      # hash to +options+. Set +escape+ to false to disable attribute value
      # escaping.
      #
      # ==== Options
      #
      # You can use symbols or strings for the attribute names.
      #
      # Use +true+ with boolean attributes that can render with no value, like
      # +disabled+ and +readonly+.
      #
      # HTML5 <tt>data-*</tt> attributes can be set with a single +data+ key
      # pointing to a hash of sub-attributes.
      #
      # ==== Examples
      #
      #   tag('br')
      #   # => <br />
      #
      #   tag('br', nil, true)
      #   # => <br>
      #
      #   tag('input', type: 'text', disabled: true)
      #   # => <input type='text' disabled='disabled' />
      #
      #   tag('input', type: 'text', class: ['strong', 'highlight'])
      #   # => <input class='strong highlight' type='text' />
      #
      #   tag('img', src: 'open & shut.png')
      #   # => <img src='open &amp; shut.png' />
      #
      #   tag('img', {src: 'open &amp; shut.png'}, false, false)
      #   # => <img src='open &amp; shut.png' />
      #
      #   tag('div', data: {name: 'Stephen', city_state: %w(Chicago IL)})
      #   # => <div data-name='Stephen' data-city-state='[&quot;Chicago&quot;,&quot;IL&quot;]' />
      def tag(name = nil, options = nil, open = false, escape = true)
        if name.nil?
          tag_builder
        else
          '<#{name}#{tag_builder.tag_options(options, escape) if options}#{open ? '>' : ' />'}'.html_safe
        end
      end
    
        # Expose one or more attributes within a block. Old values are returned after the block concludes.
    # Example demonstrating the common use of needing to set Current attributes outside the request-cycle:
    #
    #   class Chat::PublicationJob < ApplicationJob
    #     def perform(attributes, room_number, creator)
    #       Current.set(person: creator) do
    #         Chat::Publisher.publish(attributes: attributes, room_number: room_number)
    #       end
    #     end
    #   end
    def set(set_attributes)
      old_attributes = compute_attributes(set_attributes.keys)
      assign_attributes(set_attributes)
      yield
    ensure
      assign_attributes(old_attributes)
    end
    
        test 'the middleware stack is exposed as 'middleware' in the controller' do
      result = @app.call(env_for('/'))
      assert_equal 'First!', result[1]['Middleware-Order']
    end
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
          add_delivery_method :smtp, Mail::SMTP,
        address:              'localhost',
        port:                 25,
        domain:               'localhost.localdomain',
        user_name:            nil,
        password:             nil,
        authentication:       nil,
        enable_starttls_auto: true
    
            def enqueue_delivery(delivery_method, options = {})
          if processed?
            super
          else
            args = @mailer_class.name, @action.to_s, delivery_method.to_s, @params, *@args
            ActionMailer::Parameterized::DeliveryJob.set(options).perform_later(*args)
          end
        end
    end
    
              retry
        end
      end
    end
  end
    
            subject.call(json, forwarder)
      end
    
      def show
    @tag = Tag.find_by!(name: params[:id].downcase)
    
            expect(response).to have_http_status(:missing)
      end
    end
  end
end

    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.settings['boost_modal']).to be true
      expect(user.settings['delete_modal']).to be false
    end
  end
end
