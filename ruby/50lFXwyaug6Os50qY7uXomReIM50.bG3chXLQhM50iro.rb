
        
                  def initialize(template_object, object_name, method_name, object,
                         sanitized_attribute_name, text, value, input_html_options)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @sanitized_attribute_name = sanitized_attribute_name
            @text = text
            @value = value
            @input_html_options = input_html_options
          end
    
            private
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        def initialize_copy(other)
      @paths = other.paths.dup
      self
    end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
            receiver = Agents::CannotBeScheduled.new(
           :name => 'Receiving Agent',
        )
        receiver.propagate_immediately = true
        receiver.user = users(:bob)
        receiver.sources << sender
        receiver.save!
    
    gemspec
    
        def translation_scope
      'devise.unlocks'
    end
end

    
      # Defines which strategy can be used to unlock an account.
  # Values: :email, :time, :both
  mattr_accessor :unlock_strategy
  @@unlock_strategy = :both
    
          # Sign in a user and tries to redirect first to the stored location and
      # then to the url specified by after_sign_in_path_for. It accepts the same
      # parameters as the sign_in method.
      def sign_in_and_redirect(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
        sign_in(scope, resource, options)
        redirect_to after_sign_in_path_for(resource)
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # Converts this configuration object to JSON.
        def to_json(*a)
          instance_variables_hash.to_json(*a)
        end
    
      private
    
      def create
    if signed_request_account
      upgrade_account
      process_payload
      head 202
    else
      render plain: signature_verification_failure_reason, status: 401
    end
  end
    
          if @account_moderation_note.save
        redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.created_msg')
      else
        @account          = @account_moderation_note.target_account
        @moderation_notes = @account.targeted_moderation_notes.latest
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
      expect(status).to be_success
end
    
            # rubocop:disable Style/MethodMissing
        def method_missing(key, value=nil)
          if value
            set(lvalue(key), value)
          else
            fetch(key)
          end
        end
        # rubocop:enable Style/MethodMissing
    
          attr_reader :validators
    
          def keys
        values.keys
      end
    
    module Jekyll
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
          if File.symlink?(includes_dir)
        return 'Includes directory '#{includes_dir}' cannot be a symlink'
      end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end