
        
        def custom_release_header_anchors(markdown)
  header_regexp = %r!^(\d{1,2})\.(\d{1,2})\.(\d{1,2}) \/ \d{4}-\d{2}-\d{2}!
  section_regexp = %r!^### \w+ \w+$!
  markdown.split(%r!^##\s!).map do |release_notes|
    _, major, minor, patch = *release_notes.match(header_regexp)
    release_notes
      .gsub(header_regexp, '\\0\n{: #v\\1-\\2-\\3}')
      .gsub(section_regexp) { |section| '#{section}\n{: ##{slugify(section)}-v#{major}-#{minor}-#{patch}}' }
  end.join('\n## ')
end
    
              @reload_body = File.read(reload_file)
          @reload_size = @reload_body.bytesize
        end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        group.add(moderator)
    group.save
    
            post_args[:topic].notify_muted!(user)
        expect {
          Fabricate(:post, user: user2, topic: post.topic, raw: 'hello @' + user.username)
        }.to change(user.notifications, :count).by(0)
      end
    end
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{staff.id}'
      end
    end
  end
end

    
            it 'does not use two's complement form for negative numbers for formats bBoxX' do
          format('%+b', -10).should == '-1010'
          format('%+B', -10).should == '-1010'
          format('%+o', -87).should == '-127'
          format('%+x', -196).should == '-c4'
          format('%+X', -196).should == '-C4'
        end
      end
    end
    
    module Rex
module Proto
module Http
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        def replace_vars(less)
      less = less.dup
      # skip header comment
      less =~ %r(\A/\*(.*?)\*/)m
      from           = $~ ? $~.to_s.length : 0
      less[from..-1] = less[from..-1].
          gsub(/(?!@mixin|@media|@page|@keyframes|@font-face|@-\w)@/, '$').
          # variables that would be ignored by gsub above: e.g. @page-header-border-color
          gsub(/@(page[\w-]+)/, '$\1')
      less
    end
    
        # get sha of the branch (= the latest commit)
    def get_branch_sha
      @branch_sha ||= begin
        if @branch + '\n' == %x[git rev-parse #@branch]
          @branch
        else
          cmd = 'git ls-remote #{Shellwords.escape 'https://github.com/#@repo'} #@branch'
          log cmd
          result = %x[#{cmd}]
          raise 'Could not get branch sha!' unless $?.success? && !result.empty?
          result.split(/\s+/).first
        end
      end
    end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        private
    
        # Returns the larger of the two dimensions
    def larger
      [height, width].max
    end