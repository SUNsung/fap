
        
              def test_controller_raise_error_about_missing_helper
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'Missing helper file helpers/missing_helper.rb', e.message
      end
    
    class CommentRelevance
  extend ActiveModel::Naming
  include ActiveModel::Conversion
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            private
    
          def jekyll
        JekyllDrop.global
      end
    
          def grouped_array(groups)
        groups.each_with_object([]) do |item, array|
          array << {
            'name'  => item.first,
            'items' => item.last,
            'size'  => item.last.size,
          }
        end
      end
    end
  end
end
