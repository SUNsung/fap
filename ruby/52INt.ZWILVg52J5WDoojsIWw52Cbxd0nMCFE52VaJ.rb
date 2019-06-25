
        
          // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
      it 'sets a new csrf token for the session in env, even after a 'safe' request' do
    get('/', {}, {})
    expect(env['rack.session'][:csrf]).not_to be_nil
  end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
          def js # custom js
        @js
      end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
    desc 'Update version number and gemspec'
task :bump do
  puts 'Updated version to #{bump_version}'
  # Execute does not invoke dependencies.
  # Manually invoke gemspec then validate.
  Rake::Task[:gemspec].execute
  Rake::Task[:validate].execute
end