
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
            def proper_site_url?(site)
          url = site.config['url']
          [
            url_exists?(url),
            url_valid?(url),
            url_absolute(url),
          ].all?
        end
    
                raise SystemExit unless process.success?
          end
        end
      end
    end
  end
end

    
                  Jekyll.logger.info 'LiveReload address:',
                                 'http://#{opts['host']}:#{opts['livereload_port']}'
            end
          end
          @thread.abort_on_exception = true
        end
    
    module Kramdown
  module Parser
    class SmartyPants < Kramdown::Parser::Kramdown
      def initialize(source, options)
        super
        @block_parsers = [:block_html, :content]
        @span_parsers =  [:smart_quotes, :html_entity, :typographic_syms, :span_html]
      end
    
        # Transform the contents based on the content type.
    #
    # Returns the transformed contents.
    def transform
      _renderer.convert(content)
    end
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
      # POST /resource/password
  def create
    self.resource = resource_class.send_reset_password_instructions(resource_params)
    yield resource if block_given?
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end