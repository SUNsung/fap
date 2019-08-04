
        
              assert_empty @site.reader.filter_entries(
        files
      )
    end
    
    def pr(url)
  if url.end_with?(FORWARD_SLASH)
    url
  else
    url_dir = File.dirname(url)
    url_dir.end_with?(FORWARD_SLASH) ? url_dir : '#{url_dir}/'
  end
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
      def remove_owner
    group = Group.find_by(id: params.require(:id))
    raise Discourse::NotFound unless group
    
          before do
        SiteSetting.prevent_anons_from_downloading_files = true
        SiteSetting.authorized_extensions = 'pdf|svg|jpg'
      end
    
                store.remove_upload(upload)
          end
        end
      end
    end
  end
    
      def load_diff(hash, key, val)
    if f = val['theme_fields']
      f.each do |row|
        entry = hash[row['target'] + ' ' + row['name']] ||= {}
        entry[key] = row['value']
      end
    end
  end
    
      it 'returns true when at EOF with a length greater than the size of uncompressed data' do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read(11)
    gz.eof?.should be_true
  end
    
          it 'decrements pos' do
        @gz.ungetbyte 0x21
        @gz.pos.should == 9
      end
    
      it 'inflates chunked data' do
    @chunks.map { |chunk| chunk.length }.should == [16384, 16384, 16384, 16384, 16384, 16384, 1696]
  end