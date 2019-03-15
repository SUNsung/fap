
        
                def render
          options = @options.stringify_keys
          options['type']     = 'checkbox'
          options['value']    = @checked_value
          options['checked'] = 'checked' if input_checked?(options)
    
    require 'action_view/helpers/tags/collection_helpers'
    
              content = if block_given?
            @template_object.capture(builder, &block)
          elsif @content.present?
            @content.to_s
          else
            render_component(builder)
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class TextField < Base # :nodoc:
        include Placeholderable
    
        def initialize(paths = [])
      @paths = typecast paths
    end
    
          # Adds a value to a set.
      #
      # raw_key - The key of the set to add the value to.
      # value - The value to add to the set.
      # timeout - The new timeout of the key.
      def self.set_add(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
            def id_for_already_imported_cache(issue)
          issue.number
        end
    
        def version
      context[:version]
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
          def process_response(response)
        super.merge! response_url: response.url
      end
    end
  end
end

    
            css('img[style]').each do |node|
          node['align'] ||= node['style'][/float:\s*(left|right)/, 1]
          node['style'] = node['style'].split(';').map(&:strip).select { |s| s =~ /\Awidth|height/ }.join(';')
        end
    
      def unpin
    path.unlink if pinned?
    HOMEBREW_PINNED_KEGS.rmdir_if_possible
  end
    
            return nil
      end
    end
  end
end end end

    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
        rc_args = []
    
      private
    
        # Support mapping source=dest
    # This mapping should work the same way 'rsync -a' does
    #   Meaning 'rsync -a source dest'
    #   and 'source=dest' in fpm work the same as the above rsync
    if path =~ /.=./ && !File.exists?(chdir == '.' ? path : File.join(chdir, path))
      origin, destination = path.split('=', 2)
    
        self.name = control['pkgname'][0]
    
      # This method is used by the puppet manifest template
  def puppetsort(hash)
    # TODO(sissel): Implement sorting that follows the puppet style guide
    # Such as, 'ensure' goes first, etc.
    return hash.to_a
  end # def puppetsort
    
        # Some setup.py's assume $PWD == current directory of setup.py, so let's
    # chdir first.
    ::Dir.chdir(project_dir) do
      flags = [ '--root', staging_path ]
      if !attributes[:python_install_lib].nil?
        flags += [ '--install-lib', File.join(prefix, attributes[:python_install_lib]) ]
      elsif !attributes[:prefix].nil?
        # setup.py install --prefix PREFIX still installs libs to
        # PREFIX/lib64/python2.7/site-packages/
        # but we really want something saner.
        #
        # since prefix is given, but not python_install_lib, assume PREFIX/lib
        flags += [ '--install-lib', File.join(prefix, 'lib') ]
      end
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split