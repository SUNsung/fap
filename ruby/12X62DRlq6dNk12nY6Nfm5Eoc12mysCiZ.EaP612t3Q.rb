
        
                  def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
                  accept = if current_value.respond_to?(:call)
                current_value.call(item)
              else
                Array(current_value).map(&:to_s).include?(value.to_s)
              end
    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
        private
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
          def print_worst_offenders
        @io.puts
        @io.puts 'Worst offenders:'
        @timings.sort_by { |_f, t| -t }.take(10).each do |(f, t)|
          @io.puts '  #{t}s for #{f}'
        end
        @io.puts
      end
    
              RUBY
        end
    
    require 'em-websocket'
    
    module Jekyll
  module Converters
    class Markdown
      class KramdownParser
        CODERAY_DEFAULTS = {
          'css'               => 'style',
          'bold_every'        => 10,
          'line_numbers'      => 'inline',
          'line_number_start' => 1,
          'tab_width'         => 4,
          'wrap'              => 'div',
        }.freeze
    
    Badge.seed do |b|
  b.id = Badge::FirstMention
  b.name = 'First Mention'
  b.badge_type_id = BadgeType::Bronze
  b.multiple_grant = false
  b.target_posts = true
  b.show_posts = true
  b.query = BadgeQueries::FirstMention
  b.badge_grouping_id = BadgeGrouping::GettingStarted
  b.default_badge_grouping_id = BadgeGrouping::GettingStarted
  b.trigger = Badge::Trigger::PostRevision
  b.system = true
end
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
      # Small method that adds a mapping to Devise.
  def self.add_mapping(resource, options)
    mapping = Devise::Mapping.new(resource, options)
    @@mappings[mapping.name] = mapping
    @@default_scope ||= mapping.name
    @@helpers.each { |h| h.define_helpers(mapping) }
    mapping
  end
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
          @user.resend_confirmation_instructions
    
        def copy
      authorize @custom_emoji, :copy?
    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
        def status_params
      params.require(:status).permit(:sensitive)
    end
    
      private
    
        '#{self.method} #{self.uri} #{proto_str}\r\n'
  end
    
      #
  # Resets the parsing state.
  #
  def reset_cli
    self.request.reset
  end
    
    require 'rex/proto/ipmi/utils'
    
                if OpenSSL::HMAC.digest('MD5', k1, decrypted) != checksum
              raise ::RuntimeError, 'RC4-HMAC decryption failed, incorrect checksum verification'
            end
    
                seq.to_der
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.pvno = decode_pvno(val)
              when 1
                self.msg_type = decode_msg_type(val)
              when 3
                self.crealm = decode_crealm(val)
              when 4
                self.cname = decode_cname(val)
              when 5
                self.ticket = decode_ticket(val)
              when 6
                self.enc_part = decode_enc_part(val)
              else
                raise ::RuntimeError, 'Failed to decode KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
              # Decodes the e_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_e_data(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
      require 'cocoapods/core_overrides'
end
