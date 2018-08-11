
        
                # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
          # `{{ site.related_posts }}` is how posts can get posts related to
      # them, either through LSI if it's enabled, or through the most
      # recent posts.
      # We should remove this in 4.0 and switch to `{{ post.related_posts }}`.
      def related_posts
        return nil unless @current_document.is_a?(Jekyll::Document)
        @current_document.related_posts
      end
      attr_writer :current_document
    
          def jekyll
        JekyllDrop.global
      end
    
          #
      # Require a gem or file if it's present, otherwise silently fail.
      #
      # names - a string gem name or array of gem names
      #
      def require_if_present(names)
        Array(names).each do |name|
          begin
            require name
          rescue LoadError
            Jekyll.logger.debug 'Couldn't load #{name}. Skipping.'
            yield(name, version_constraint(name)) if block_given?
            false
          end
        end
      end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
    module Homebrew
  def config
    dump_verbose_config
  end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
        current_revision_var = 'HOMEBREW_UPDATE_AFTER#{repo_var}'
    @current_revision = ENV[current_revision_var].to_s
    raise ReporterRevisionUnsetError, current_revision_var if @current_revision.empty?
  end
    
          # Topic may be hard deleted due to spam, no point complaining
      # we would have to look at the topics table id sequence to find cases
      # where this was called with an invalid id, no point really
      return unless topic.present?
    
          respond_to_on_destroy
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          protected
    
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

    
    # Silence warnings about this defaulting to true
I18n.enforce_available_locales = true

    
    input = ARGV.shift() || usage()
    
                inp.attributes.keys.each do |ikey|
              if (ikey.downcase == 'value')
                inp[ikey] = ''
                next
              end
    
    if (ip == nil || port == nil)
  puts 'Syntax: test.rb <ip> [port]\n'
  exit
end
    
    			if temp[2].length == 2
				self.block[-1][-1] << temp[2][0].ljust(8)
				self.block[-1][-1] << temp[2][1]
			elsif temp[2].length == 3
				self.block[-1][-1] << temp[2][0].ljust(8)
				self.block[-1][-1] << temp[2][1]
				self.block[-1][-1] << ' '
				self.block[-1][-1] << temp[2][2]
			else
				self.block[-1][-1] << temp[2].to_s
			end
		end