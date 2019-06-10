
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
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
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
                if class_mod.respond_to?(:available_configs)
              available_configs = class_mod.available_configs
              available_configs.each do |config|
                next unless options.key?(config)
                send(:'#{config}=', options.delete(config))
              end
            end
          end
    
    require 'devise/hooks/timeoutable'
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
    module Jekyll
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
        it 'accepts jsfiddle link with a custom-tab parameter' do
      expect do
        generate_new_liquid(jsfiddle_link_with_custom_tabs)
      end.not_to raise_error
    end
    
          it 'unmutes the parent comment if already muted' do
        sign_in original_commenter
        parent_comment_by_og.update(receive_notifications: false)
        patch '/comment_mutes/#{parent_comment_by_og.id}', params: { comment: { receive_notifications: 'true' } }
        expect(parent_comment_by_og.reload.receive_notifications).to eq true
      end
    end
    
      def create
    @broadcast = Broadcast.new(broadcast_params)
    redirect_to '/internal/broadcasts'
  end
    
        it 'doesn't call the processor if the condition method returns false' do
      uploader_class.process :resize => [200, 300], :if => :false?
      uploader_class.process :fancy, :if => :false?
      expect(uploader).to receive(:false?).with('test.jpg').twice.and_return(false)
      expect(uploader).not_to receive(:resize)
      expect(uploader).not_to receive(:fancy)
      uploader.process!('test.jpg')
    end
    
    When /^I delete the datamapper record$/ do
  @instance.destroy
end

    
          ##
      # Override this method in your uploader to provide a white list of extensions which
      # are allowed to be uploaded. Compares the file's extension case insensitive.
      # Furthermore, not only strings but Regexp are allowed as well.
      #
      # When using a Regexp in the white list, `\A` and `\z` are automatically added to
      # the Regexp expression, also case insensitive.
      #
      # === Returns
      #
      # [NilClass, String, Regexp, Array[String, Regexp]] a white list of extensions which are allowed to be uploaded
      #
      # === Examples
      #
      #     def extension_whitelist
      #       %w(jpg jpeg gif png)
      #     end
      #
      # Basically the same, but using a Regexp:
      #
      #     def extension_whitelist
      #       [/jpe?g/, 'gif', 'png']
      #     end
      #
      def extension_whitelist; end