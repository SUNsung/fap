
        
                collection = with_rate_limit { octokit.public_send(method, *args) }
        next_url = octokit.last_response.rels[:next]
    
            def sidekiq_worker_class
          ImportIssueWorker
        end
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
            def sidekiq_worker_class
          ImportLfsObjectWorker
        end
    
    module Gitlab
  module GithubImport
    module Representation
      class Note
        include ToHash
        include ExposeAttribute
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
        DATA_URL = 'data:'.freeze
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def format_path(path)
      path.to_s.remove File.join(File.expand_path('.'), '')
    end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      def clean_up_passwords(object)
    object.clean_up_passwords if object.respond_to?(:clean_up_passwords)
  end
    
            warden.logout(scope)
        warden.clear_strategies_cache!(scope: scope)
        instance_variable_set(:'@current_#{scope}', nil)
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
        def default_path_names(options)
      @path_names = Hash.new { |h,k| h[k] = k.to_s }
      @path_names[:registration] = ''
      @path_names.merge!(options[:path_names]) if options[:path_names]
    end
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
            line_num = e.sass_line + 1 - line_offset
        min = [line_num - 6, 0].max
        section = e.sass_template.rstrip.split('\n')[min...line_num + 5]
        return e.sass_backtrace_str if section.nil? || section.empty?
    
          DOUBLE_SPLAT = '**'.freeze
    
        def non_comment_token_line_numbers
      @non_comment_token_line_numbers ||= begin
        non_comment_tokens = processed_source.tokens.reject(&:comment?)
        non_comment_tokens.map(&:line).uniq
      end
    end
    
          def add(klass, *args)
        remove(klass) if exists?(klass)
        entries << Entry.new(klass, *args)
      end
    
          indifferent_hash.merge! request.params
      route_params.each {|k,v| indifferent_hash[k.to_s] = v }
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        # Returns an extension based on the content type. e.g. 'jpeg' for
    # 'image/jpeg'. If the style has a specified format, it will override the
    # content-type detection.
    #
    # Each mime type generally has multiple extensions associated with it, so
    # if the extension from the original filename is one of these extensions,
    # that extension is used, otherwise, the first in the list is used.
    def content_type_extension attachment, style_name
      mime_type = MIME::Types[attachment.content_type]
      extensions_for_mime_type = unless mime_type.empty?
        mime_type.first.extensions
      else
        []
      end