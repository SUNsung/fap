
        
            should 'not include files from base dir which start with an underscore' do
      refute_includes @collection.filtered_entries, '_do_not_read_me.md'
    end
    
    class TestGeneratedSite < JekyllUnitTest
  context 'generated sites' do
    setup do
      clear_dest
    
          # `Site#documents` cannot be memoized so that `Site#docs_to_write` can access the
      # latest state of the attribute.
      #
      # Since this method will be called after `Site#pre_render` hook, the `Site#documents`
      # array shouldn't thereafter change and can therefore be safely memoized to prevent
      # additional computation of `Site#documents`.
      def documents
        @documents ||= @obj.documents
      end
    
            @config.delete('highlighter')
        @config['kramdown'].delete('syntax_highlighter')
        markdown = Converters::Markdown.new(Utils.deep_merge_hashes(@config, override))
        result = nokogiri_fragment(markdown.convert(<<~MARKDOWN))
          ~~~ruby
          puts 'Hello World'
          ~~~
        MARKDOWN
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
                    machine.ui.info(I18n.t('vagrant.rsync_auto_remove_folder',
                                    folder: folder_opts[:hostpath]))
              else
                if options.has_key?(:rsync_chown)
                  folder_opts = folder_opts.merge(rsync_ownership: options[:rsync_chown])
                end
                sync_folders[id] = folder_opts
              end
            end
            folders = sync_folders
    
          it 'should return false' do
        expect(subject.rsync_chown_support?(machine)).to be_falsey
      end
    end
  end
    
          # Put a file in the box directory to verify it is packaged properly
      # later.
      directory.join('test_file').open('w') do |f|
        f.write(test_file_contents)
      end
    
          it 'does not attempt to remove the container' do
        expect(subject).not_to receive(:execute).with('docker-compose', '-f', 'docker-compose.yml', '-p', 'cwd', 'rm', '-f', 'docker_1', {})
        subject.rm(cid)
      end
    end
  end
    
      shared_examples_for :Default do |item, default|
    context 'default value' do
      it 'should be #{default}' do
        if default.nil?
          expect(subject.send(item)).to(be_nil)
        else
          expect(subject.send(item)).to(be == default)
        end
      end
    end
  end
    
      # What architecture is this package for?
  attr_accessor :architecture
    
        File.write(build_path('packlist'), files.sort.join('\n'))