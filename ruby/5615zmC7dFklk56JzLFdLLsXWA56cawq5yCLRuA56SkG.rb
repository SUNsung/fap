
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
            # After a new blog has been created, print a success notification and
        # then automatically execute bundle install from within the new blog dir
        # unless the user opts to generate a blank blog or skip 'bundle install'.
    
            def initialize
          @websockets = []
          @connections_count = 0
          @started_event = Utils::ThreadEvent.new
          @stopped_event = Utils::ThreadEvent.new
        end
    
          def posts
        @site_posts ||= @obj.posts.docs.sort { |a, b| b <=> a }
      end
    
          private
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
          if path.extname == '.la'
        path.unlink
      elsif path.basename.to_s == 'perllocal.pod'
        # Both this file & the .packlist one below are completely unnecessary
        # to package & causes pointless conflict with other formulae. They are
        # removed by Debian, Arch & MacPorts amongst other packagers as well.
        # The files are created as part of installing any Perl module.
        path.unlink
      elsif path.basename.to_s == '.packlist' # Hidden file, not file extension!
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if executable_path?(path)
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end
    
              # Check for git:// GitHub repo urls, https:// is preferred.
          git_gh_pattern = %r{^git://[^/]*github\.com/}
          audit_urls(urls, git_gh_pattern) do |_, url|
            problem 'Please use https:// for #{url}'
          end
    
            def autocorrect(node)
          lambda do |corrector|
            correction = node.source
            first_word = string_content(node).split.first
            unless VALID_LOWERCASE_WORDS.include?(first_word)
              first_char = first_word.to_s.chars.first
              correction.sub!(/^(['']?)([a-z])/, '\\1#{first_char.upcase}')
            end
            correction.sub!(/^(['']?)an?\s/i, '\\1')
            correction.gsub!(/(ommand ?line)/i, 'ommand-line')
            correction.gsub!(/(^|[^a-z])#{@formula_name}([^a-z]|$)/i, '\\1\\2')
            correction.gsub!(/^(['']?)\s+/, '\\1')
            correction.gsub!(/\s+(['']?)$/, '\\1')
            correction.gsub!(/\.(['']?)$/, '\\1')
            corrector.insert_before(node.source_range, correction)
            corrector.remove(node.source_range)
          end
        end
      end
    end
  end
end
