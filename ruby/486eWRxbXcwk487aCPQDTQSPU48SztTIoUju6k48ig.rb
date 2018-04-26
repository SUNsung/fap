
        
        #
def run_in_shell(*args)
  p, output = Jekyll::Utils::Exec.run(*args)
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.1.0/)
      end
    
        h = base.dup
    assert_equal(h1, h.delete_if {|k,v| k.instance_of?(String) })
    assert_equal(h1, h)
    
      def test_strftime_flags
    t = Time.mktime(2001, 10, 1, 2, 0, 0)
    assert_equal('01', t.strftime('%d'))
    assert_equal('01', t.strftime('%0d'))
    assert_equal(' 1', t.strftime('%_d'))
    assert_equal(' 1', t.strftime('%e'))
    assert_equal('01', t.strftime('%0e'))
    assert_equal(' 1', t.strftime('%_e'))
    assert_equal('AM', t.strftime('%p'))
    assert_equal('am', t.strftime('%#p'))
    assert_equal('am', t.strftime('%P'))
    assert_equal('AM', t.strftime('%#P'))
    assert_equal('02', t.strftime('%H'))
    assert_equal('02', t.strftime('%0H'))
    assert_equal(' 2', t.strftime('%_H'))
    assert_equal('02', t.strftime('%I'))
    assert_equal('02', t.strftime('%0I'))
    assert_equal(' 2', t.strftime('%_I'))
    assert_equal(' 2', t.strftime('%k'))
    assert_equal('02', t.strftime('%0k'))
    assert_equal(' 2', t.strftime('%_k'))
    assert_equal(' 2', t.strftime('%l'))
    assert_equal('02', t.strftime('%0l'))
    assert_equal(' 2', t.strftime('%_l'))
    t = Time.mktime(2001, 10, 1, 14, 0, 0)
    assert_equal('PM', t.strftime('%p'))
    assert_equal('pm', t.strftime('%#p'))
    assert_equal('pm', t.strftime('%P'))
    assert_equal('PM', t.strftime('%#P'))
    assert_equal('14', t.strftime('%H'))
    assert_equal('14', t.strftime('%0H'))
    assert_equal('14', t.strftime('%_H'))
    assert_equal('02', t.strftime('%I'))
    assert_equal('02', t.strftime('%0I'))
    assert_equal(' 2', t.strftime('%_I'))
    assert_equal('14', t.strftime('%k'))
    assert_equal('14', t.strftime('%0k'))
    assert_equal('14', t.strftime('%_k'))
    assert_equal(' 2', t.strftime('%l'))
    assert_equal('02', t.strftime('%0l'))
    assert_equal(' 2', t.strftime('%_l'))
    assert_equal('MON', t.strftime('%^a'))
    assert_equal('OCT', t.strftime('%^b'))
    
      it 'does not decode an int when fewer bytes than an int remain and the '*' modifier is passed' do
    'abc'.unpack(unpack_format('*')).should == []
  end
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
          sleep
      after_sleep2 = true
    end
    
        def unlink_files(files)
      Array(files).each do |file|
        file.close unless file.closed?
        file.unlink if file.respond_to?(:unlink) && file.path.present? && File.exist?(file.path)
      end
    end
    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end
    
      # Get list of styles saved on previous deploy (running rake paperclip:refresh:missing_styles)
  def self.get_registered_attachments_styles
    YAML.load_file(Paperclip.registered_attachments_styles_path)
  rescue Errno::ENOENT
    nil
  end
  private_class_method :get_registered_attachments_styles
    
        def self.included(base)
      ActiveRecord::ConnectionAdapters::Table.send :include, TableDefinition
      ActiveRecord::ConnectionAdapters::TableDefinition.send :include, TableDefinition
      ActiveRecord::ConnectionAdapters::AbstractAdapter.send :include, Statements
      ActiveRecord::Migration::CommandRecorder.send :include, CommandRecorder
    end