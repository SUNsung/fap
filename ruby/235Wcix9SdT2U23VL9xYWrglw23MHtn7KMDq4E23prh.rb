
        
        WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
          def after_feature_element(feature_element)
        @timings[feature_element_timing_key(feature_element)] = Time.now - @timings[feature_element_timing_key(feature_element)]
        @io.print ' (#{@timings[feature_element_timing_key(feature_element)]}s)'
      end
    
                # stream_file_data would free us from keeping livereload.js in memory
            # but JRuby blocks on that call and never returns
            send_data(reload_body)
            close_connection_after_writing
          else
            body = 'This port only serves livereload.js over HTTP.\n'
            headers = [
              'HTTP/1.1 400 Bad Request',
              'Content-Type: text/plain',
              'Content-Length: #{body.bytesize}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
            send_data(body)
            close_connection_after_writing
          end
        end
        # rubocop:enable Metrics/MethodLength
      end
    end
  end
end

    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        delegate :empty?, :blank?, to: :pages
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
    # ECMA-262, section 15.1.3
    def Encode(uri, unescape)
      uriLength = uri.length;
      # We are going to pass result to %StringFromCharCodeArray
      # which does not expect any getters/setters installed
      # on the incoming array.
      result    = Array.new(uriLength);
      index = 0;
      k = -1;
      while ((k+=1) < uriLength) do
        cc1 = uri.charCodeAt(k);
        next if cc1.nil?
        if (self.send(unescape, cc1))
          result[index] = cc1;
          index += 1
        else
          if (cc1 >= 0xDC00 && cc1 <= 0xDFFF);
            throw('URI malformed')
          end
          if (cc1 < 0xD800 || cc1 > 0xDBFF)
            index = URIEncodeSingle(cc1, result, index);
          else
            k+=1;
            if (k == uriLength);
              throw('URI malformed')
            end
            cc2 = uri.charCodeAt(k);
            if (cc2 < 0xDC00 || cc2 > 0xDFFF);
              throw('URI malformed')
            end
            index = URIEncodePair(cc1, cc2, result, index);
          end
        end
      end
      # use .compact to get rid of nils from charCodeAt
      # return %StringFromCharCodeArray(result);
      # 'c' = 8 bit signed char
      # http://www.ruby-doc.org/core-1.9.3/Array.html#method-i-pack
      return result.compact.pack 'c*'
    end
  end # class << self
end # module

    
    # Silence locale validation warning
require 'i18n'
I18n.enforce_available_locales = false
    
        follow_redirect!
    assert_equal '/create/foo/Home', last_request.fullpath
    assert last_response.ok?
  end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
      if wiki_options[:plantuml_url]
    Gollum::Filter::PlantUML.configure do |config|
      puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
      config.url = wiki_options[:plantuml_url]
    end
  end
    
      class Error < StandardError;
  end
    
        context 'opening brace on separate line from first element' do
      it 'allows closing brace on same line as last element' do
        expect_no_offenses(construct(true, false))
      end
    
        context 'but no comment after the last element' do
      it 'autocorrects the closing brace' do
        new_source = autocorrect_source(source)
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          # Checks whether this `hash` uses a mix of hash rocket and colon
      # delimiters for its pairs.
      #
      # @return [Boolean] whether the `hash` uses mixed delimiters
      def mixed_delimiters?
        pairs.map(&:delimiter).uniq.size > 1
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
              inventory_unit.transaction do
            if inventory_unit.update_attributes(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end